#include "xmlquizfile_variants.h"
#include "../quiz/gen/derivs_generatedquestion.h"
#include "../quiz/gen/limits_generatedquestion.h"
namespace xmlquizfile { namespace variants {


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


typedef ChainHelper<GeneratedQuestion *, void> WriterHelper;

class Derivs_WriterHelper: public WriterHelper
{
public:
    bool accept (GeneratedQuestion *q)
    {
        qDebug() << q->itemType() << Derivs_GeneratedQuestion().itemType();
        return q->itemType()==Derivs_GeneratedQuestion().itemType();
    }
    void get (GeneratedQuestion *question)
    {
        Derivs_GeneratedQuestion *q = (Derivs_GeneratedQuestion *)question;
        QXmlStreamWriter *w = ((Writer *)parent())->writer();
        w->writeStartElement("generated_question");
        w->writeStartElement("id"), w->writeCharacters(Derivs_GeneratedQuestion().itemType()), w->writeEndElement();
        w->writeStartElement("index"), w->writeCharacters(QString::number(q->derivIndex())), w->writeEndElement();
        w->writeStartElement("key"), w->writeCharacters(QString::number(q->key())), w->writeEndElement();
        w->writeEndElement();
    }
};

class Limits_WriterHelper: public WriterHelper
{
public:
    bool accept (GeneratedQuestion *q)
    {
        return q->itemType()==Limits_GeneratedQuestion().itemType();
    }
    void get (GeneratedQuestion *question)
    {
        Limits_GeneratedQuestion *q = (Limits_GeneratedQuestion *)question;
        QXmlStreamWriter *w = ((Writer *)parent())->writer();
        w->writeStartElement("generated_question");
        w->writeStartElement("id"), w->writeCharacters(Limits_GeneratedQuestion().itemType()), w->writeEndElement();
        w->writeStartElement("index"), w->writeCharacters(QString::number(q->limitIndex())), w->writeEndElement();
        w->writeStartElement("key"), w->writeCharacters(QString::number(q->key())), w->writeEndElement();
        w->writeEndElement();
    }
};

Writer::Writer (QXmlStreamWriter *writer)
{
	_writer = writer;
    registerHelper(new Limits_WriterHelper());
    registerHelper(new Derivs_WriterHelper());
	//registerHelper(new IntegsHelper());
}

QXmlStreamWriter *Writer::writer()
{
	return _writer;
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


class Derivs_ReaderHelper: public ChainHelper<QDomElement *, GeneratedQuestion *>
{
public:
    bool accept (QDomElement *e)
    {
        return e->elementsByTagName("id").at(0).toElement().text()==Derivs_GeneratedQuestion().itemType();
    }
    GeneratedQuestion *get (QDomElement *el)
    {
        Derivs_GeneratedQuestion *r = new Derivs_GeneratedQuestion();
        r->setKey(el->elementsByTagName("key").at(0).toElement().text().toInt());
        r->setDerivIndex(el->elementsByTagName("index").at(0).toElement().text().toInt());
        return r;
    }
};

class Limits_ReaderHelper: public ChainHelper<QDomElement *, GeneratedQuestion *>
{
public:
    bool accept (QDomElement *e)
    {
        return e->elementsByTagName("id").at(0).toElement().text()==Limits_GeneratedQuestion().itemType();
    }
    GeneratedQuestion *get (QDomElement *el)
    {
        Limits_GeneratedQuestion *r = new Limits_GeneratedQuestion();
        r->setKey(el->elementsByTagName("key").at(0).toElement().text().toInt());
        r->setLimitIndex(el->elementsByTagName("index").at(0).toElement().text().toInt());
        return r;
    }
};

Reader::Reader()
{
    registerHelper(new Limits_ReaderHelper());
    registerHelper(new Derivs_ReaderHelper());
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


}}
