#include "quizquestion_xmlquizfile_structure_helper.h"
#include "../quiz/quizquestion.h"
#include <QXmlStreamWriter>
#include "xmlquizfile_structure.h"
namespace xmlquizfile { namespace structure {


///////////////////////////////////////////////////////////////////////////////////////////


bool QuizQuestion_ReaderHelper::accept (QDomElement *e)
{
	return e->tagName()=="question";
}

QuizNode *QuizQuestion_ReaderHelper::get (QDomElement *e)
{
	QuizQuestion *r = new QuizQuestion();
	r->setID(e->elementsByTagName("id").at(0).toElement().text());
	r->setImageFile(e->elementsByTagName("img").at(0).toElement().attribute("src"));
	return r;
}


///////////////////////////////////////////////////////////////////////////////////////////


void QuizQuestion_WriterHelper::get (QuizNode *node)
{
    QuizQuestion *q = (QuizQuestion *)node;
    QXmlStreamWriter *w = ((Writer *)this->parent())->writer();
    w->writeStartElement("question");
    w->writeStartElement("id"), w->writeCharacters(q->ID()), w->writeEndElement();
    w->writeStartElement("img"), w->writeAttribute("src", q->imageFile()), w->writeEndElement();
    w->writeEndElement();
}

bool QuizQuestion_WriterHelper::accept (QuizNode *node)
{
    return node->itemType() == QuizQuestion().itemType();
}


///////////////////////////////////////////////////////////////////////////////////////////


}}
