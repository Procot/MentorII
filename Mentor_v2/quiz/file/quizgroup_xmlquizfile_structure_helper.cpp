#include "quizgroup_xmlquizfile_structure_helper.h"
#include "../quiz/quizgroup.h"
#include "xmlquizfile_quizgroupfilter.h"
#include <QXmlStreamWriter>
namespace xmlquizfile { namespace structure {

///////////////////////////////////////////////////////////////////////////////////


bool QuizGroup_ReaderHelper::accept (QDomElement *e)
{
	return e->tagName()=="group";
}

QuizNode *QuizGroup_ReaderHelper::get (QDomElement *e)
{
	QuizGroup *r = new QuizGroup();
	for(int i=0; i<e->childNodes().count(); ++i)
		if (e->childNodes().at(i).isElement())
		{
			QDomElement el = e->childNodes().at(i).toElement();
			if (el.tagName()=="title") r->setTitle(el.text());
			else if (el.tagName()=="description") r->setDescription(el.text());
			else if (el.tagName()=="img") r->setImageFile(el.attribute("src"));
            else if (el.tagName()=="filters")
            {
                xmlquizfile::xmlquizfile_quizgroupfilter::Reader rdr;
                for(int j=0; j<el.childNodes().count(); ++j)
                    if (el.childNodes().at(j).isElement())
                    {
                        QDomElement e = el.childNodes().at(j).toElement();
                        r->addFilter(rdr.get(&e));
                    }
            }
            else r->addChild(this->parent()->get(&el));
		}
	return r;
}


///////////////////////////////////////////////////////////////////////////////////////////////////


void QuizGroup_WriterHelper::get (QuizNode *node)
{
    QuizGroup *g = (QuizGroup *)node;
    QXmlStreamWriter *w = ((Writer *)this->parent())->writer();
    w->writeStartElement("group");
    w->writeStartElement("title"), w->writeCharacters(g->title()), w->writeEndElement();
    w->writeStartElement("description"), w->writeCharacters(g->description()), w->writeEndElement();
    if (!g->filters().isEmpty())
    {
        xmlquizfile::xmlquizfile_quizgroupfilter::Writer wr(w);
        w->writeStartElement("filters");
        for(int i=0; i<g->filters().count(); ++i)
            wr.get(g->filters().at(i));
        w->writeEndElement();
    }
    for(int i=0; i<g->children().count(); ++i)
        parent()->get(g->children().at(i));
    w->writeEndElement();
}

bool QuizGroup_WriterHelper::accept (QuizNode *node)
{
    return node->itemType() == QuizGroup().itemType();
}



}}
