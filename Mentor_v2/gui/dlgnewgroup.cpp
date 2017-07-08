#include "dlgnewgroup.h"
#include "ui_dlgnewgroup.h"
#include "../quiz/filter/group/random_quizgroupfilter.h"
#include "../quiz/filter/group/shuffle_quizgroupfilter.h"

QuizGroup *dlgNewGroup::makeGroup() const
{
	QuizGroup *g = new QuizGroup();
	g->setTitle(ui->lineEdit->text());
	g->setDescription(ui->lineEdit_2->text());
	if (ui->checkBox->isChecked())
		g->addFilter(new RandomQuizGroupFilter(g));
	if (ui->checkBox_2->isChecked())
		g->addFilter(new ShuffleQuizGroupFilter(g));
	return g;
}

dlgNewGroup::dlgNewGroup(bool isRandom, bool isShuffle, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dlgNewGroup)
{
    ui->setupUi(this);
	if (isRandom)
		ui->checkBox->setChecked(true),
		ui->lineEdit_2->setText("Выбор одной задачи");
	if (isShuffle)
		ui->checkBox_2->setChecked(isShuffle),
		ui->lineEdit_2->setText("В случайном порядке");
}

dlgNewGroup::~dlgNewGroup()
{
    delete ui;
}

void dlgNewGroup::on_buttonBox_accepted()
{
	this->accept();
}

void dlgNewGroup::on_buttonBox_rejected()
{
	this->reject();
}
