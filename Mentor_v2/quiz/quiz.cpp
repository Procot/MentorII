#include "quiz.h"
#include "quizgroup.h"
#include "quizvariant.h"
#include "quizquestion.h"
#include "../utils/utils.h"
#include <QDebug>
#include "filter/group/random_quizgroupfilter.h"
#include "filter/group/shuffle_quizgroupfilter.h"


//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//


/*!
 * Добавляет группу вариантов.
 * Каждая группа имеет свою нумерацию вариантов.
 */
void Quiz::addVariantGroup()
{
	this->_variants << QList<QuizVariant *>();
}


//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//


/*!
 * Добавляет новый вариант.
 * \param index Номер группы, в которую он будет добавлен.
 *        Первая группа имеет номер 0.
 * \param q Указатель на вариант, который будет добавлен.
 *        Копия варианта не создается.
 */
void Quiz::addVariant (int index, QuizVariant *q)
{
	q->setQuiz(this);
	this->_variants[index] << q;
}


//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//


/*!
 * Возвращает корневой элемент структуры контрольной.
 * \return Корневая группа
 */
QuizNode *Quiz::structure() const
{
	return this->_structure;
}


//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//


// Вспомогательная функция, нужна была в целях отладки.
// Теперь она должна возвращать указатель на новую группу.
QuizGroup *createStructure()
{
    qDebug() << "createStructure";
	return new QuizGroup();
	/*QuizGroup *r = new QuizGroup();
	//r->addFilter(new ShuffleQuizGroupFilter());
	r->setDescription("Задачи в случайном порядке");
	r->setTitle("Тригонометрия и логарифмы");

	QuizGroup *t = new QuizGroup();
	t->addFilter(new RandomQuizGroupFilter());
	t->setDescription("Выбор одной задачи");
	t->setTitle("Тригонометрия");

	QuizGroup *l = new QuizGroup();
	l->addFilter(new RandomQuizGroupFilter());
	l->setDescription("Выбор одной задачи");
	l->setTitle("Логарифмы");

	QuizQuestion *tq;
	tq = new QuizQuestion(); tq->setID("deriv1"); tq->setImageFile("47/1.png"); t->addChild(tq);
	tq = new QuizQuestion(); tq->setID("deriv2"); tq->setImageFile("47/2.png"); t->addChild(tq);
	tq = new QuizQuestion(); tq->setID("deriv3"); tq->setImageFile("47/3.png"); t->addChild(tq);
	tq = new QuizQuestion(); tq->setID("deriv4"); tq->setImageFile("47/4.png"); t->addChild(tq);

	QuizQuestion *lq;
	lq = new QuizQuestion(); lq->setID("deriv7"); lq->setImageFile("47/7.png"); l->addChild(lq);
	lq = new QuizQuestion(); lq->setID("deriv17"); lq->setImageFile("47/17.png"); l->addChild(lq);
	lq = new QuizQuestion(); lq->setID("deriv27"); lq->setImageFile("47/27.png"); l->addChild(lq);

	r->addChild(t);
	r->addChild(l);
	*/

//	return r;
}


//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//


/*!
 * Конструктор.
 * Формирует пустую контрольную.
 */
Quiz::Quiz()
{
    _structure = NULL;
	/*QuizQuestion *q;

	QuizGroup *root = new QuizGroup();
	root->setDescription("Схема, по которой строится контрольная: задачи, группы задач, и т.п.");
	root->setTitle("Структура");

	root->addChild(q=new QuizQuestion());
	q->setID("lim01");
	q->setImage(Utils::loadImage("47/1.png"));

	root->addChild(q=new QuizQuestion());
	q->setID("lim02");
	q->setImage(Utils::loadImage("47/2.png"));

	QuizGroup *g;
	root->addChild(g=new QuizGroup());
	g->setTitle("Group");
	g->setDescription("sdfkjldsjlkfjsdf");
	g->setImage(Utils::loadImage("ooo-calc.png"));
	g->addChild(q=new QuizQuestion());
	q->setID("lim03");
	q->setImage(Utils::loadImage("47/3.png"));
	g->addChild(q=new QuizQuestion());
	q->setID("lim04");
	q->setImage(Utils::loadImage("47/4.png"));
	/**/

	setStructure(createStructure());
}


//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//


/*!
 * Задать корень структуры. Старая удаляется.
 * \param root Корневой элемент новой структуры. Скопирован не будет.
 */
void Quiz::setStructure (QuizNode *root)
{
    if (_structure) delete _structure;
	_structure = root;
	root->setParent(NULL);
	root->setQuiz(this);
}


//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//


/*!
 * Возвращает список сгенерированных вариантов контрольной.
 * \return Список списков вариантов (группа x вариант).
 */
QList< QList<QuizVariant *> > Quiz::variants()
{
	return this->_variants;
}


//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//


/*!
 * Возвращает список установленных фильтров контрольной.
 * \return Список фильтров.
 */
const QList<QuizFilter *> &Quiz::filters() const
{
	return this->_filters;
}


//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//


/*!
 * Добавляет фильтр на вершину стека.
 * \param filter Новый фильтр
 */
void Quiz::addFilter (QuizFilter *filter)
{
	this->_filters.append(filter);
	filter->setQuiz(this);
}


//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//


/*!
 * Удаляет фильтр из стека фильтров.
 * \param index Номер фильтра в стеке (самый нижний имеет номер 0).
 */
void Quiz::removeFilter (int index)
{
	this->_filters.removeAt(index);
}


//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//


/*!
 * Сгенерировать варианты.
 * \param count Количество вариантов в группе.
 * \param groups Количество групп.
 */
void Quiz::generate (int count, int groups)
{
	for(int i=0; i<_variants.count(); ++i)
		for(int j=0; j<_variants[i].count(); ++j)
			delete _variants[i][j];
	_variants.clear();

	for(int g=0; g<groups; ++g)
	{
		_variants << QList<QuizVariant *>();
		for(int i=0; i<count; ++i)
		{
			QuizVariant *v = QuizVariant::generateVariant(this);
			_variants[g].append(v);
			v->setNumber(i+1);
			for(int j=0; j<_filters.count(); ++j)
				_filters[j]->applyToVariant(v);
		}
	}

	for(int j=0; j<_filters.count(); ++j)
		_filters[j]->applyToQuiz();
}


//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//

