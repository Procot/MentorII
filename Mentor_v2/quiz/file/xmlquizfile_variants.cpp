#include "xmlquizfile_variants.h"
#include "../quiz/gen/derivs_generatedquestion.h"
#include "../quiz/gen/limits_generatedquestion.h"
#include "../quiz/gen/integrals_generatedquestion.h"
#include "../quiz/gen/series_generatedquestion.h"
#include "../quiz/gen/diffequ_generatedquestion.h"
namespace xmlquizfile { namespace variants {


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


typedef ChainHelper<GeneratedQuestion *, void> WriterHelper;

class Diffequ_WriterHelper : public WriterHelper
{
public:
	bool accept(GeneratedQuestion *q)
	{
		qDebug() << q->itemType() << diffequ_GeneratedQuestion().itemType();
		return q->itemType() == diffequ_GeneratedQuestion().itemType();
	}
	void get(GeneratedQuestion *question)
	{
		diffequ_GeneratedQuestion *q = (diffequ_GeneratedQuestion *)question;
		QXmlStreamWriter *w = ((Writer *)parent())->writer();
		w->writeStartElement("generated_question");
		w->writeStartElement("id"), w->writeCharacters(diffequ_GeneratedQuestion().itemType()), w->writeEndElement();
		w->writeStartElement("index"), w->writeCharacters(QString::number(q->diffequIndex())), w->writeEndElement();
		w->writeStartElement("key"), w->writeCharacters(QString::number(q->key())), w->writeEndElement();
		w->writeEndElement();
	}
};

class Series_WriterHelper : public WriterHelper
{
public:
	bool accept(GeneratedQuestion *q)
	{
		qDebug() << q->itemType() << series_GeneratedQuestion().itemType();
		return q->itemType() == series_GeneratedQuestion().itemType();
	}
	void get(GeneratedQuestion *question)
	{
		series_GeneratedQuestion *q = (series_GeneratedQuestion *)question;
		QXmlStreamWriter *w = ((Writer *)parent())->writer();
		w->writeStartElement("generated_question");
		w->writeStartElement("id"), w->writeCharacters(series_GeneratedQuestion().itemType()), w->writeEndElement();
		w->writeStartElement("index"), w->writeCharacters(QString::number(q->serIndex())), w->writeEndElement();
		w->writeStartElement("key"), w->writeCharacters(QString::number(q->key())), w->writeEndElement();
		w->writeEndElement();
	}
};

class Integrals_WriterHelper : public WriterHelper
{
public:
	bool accept(GeneratedQuestion *q)
	{
		qDebug() << q->itemType() << Integrals_GeneratedQuestion().itemType();
		return q->itemType() == Integrals_GeneratedQuestion().itemType();
	}
	void get(GeneratedQuestion *question)
	{
		Integrals_GeneratedQuestion *q = (Integrals_GeneratedQuestion *)question;
		QXmlStreamWriter *w = ((Writer *)parent())->writer();
		w->writeStartElement("generated_question");
		w->writeStartElement("id"), w->writeCharacters(Integrals_GeneratedQuestion().itemType()), w->writeEndElement();
		w->writeStartElement("index"), w->writeCharacters(QString::number(q->integralIndex())), w->writeEndElement();
		w->writeStartElement("key"), w->writeCharacters(QString::number(q->key())), w->writeEndElement();
		w->writeEndElement();
	}
};

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
	registerHelper(new Integrals_WriterHelper());
	registerHelper(new Series_WriterHelper());
	registerHelper(new Diffequ_WriterHelper());
}

QXmlStreamWriter *Writer::writer()
{
	return _writer;
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


class Diffequ_ReaderHelper : public ChainHelper<QDomElement *, GeneratedQuestion *>
{
public:
	bool accept(QDomElement *e)
	{
		return e->elementsByTagName("id").at(0).toElement().text() == diffequ_GeneratedQuestion().itemType();
	}
	GeneratedQuestion *get(QDomElement *el)
	{
		diffequ_GeneratedQuestion *r = new diffequ_GeneratedQuestion();
		r->setKey(el->elementsByTagName("key").at(0).toElement().text().toInt());
		r->setdiffequIndex(el->elementsByTagName("index").at(0).toElement().text().toInt());
		return r;
	}
};

class Series_ReaderHelper : public ChainHelper<QDomElement *, GeneratedQuestion *>
{
public:
	bool accept(QDomElement *e)
	{
		return e->elementsByTagName("id").at(0).toElement().text() == series_GeneratedQuestion().itemType();
	}
	GeneratedQuestion *get(QDomElement *el)
	{
		series_GeneratedQuestion *r = new series_GeneratedQuestion();
		r->setKey(el->elementsByTagName("key").at(0).toElement().text().toInt());
		r->setserIndex(el->elementsByTagName("index").at(0).toElement().text().toInt());
		return r;
	}
};

class Integrals_ReaderHelper : public ChainHelper<QDomElement *, GeneratedQuestion *>
{
public:
	bool accept(QDomElement *e)
	{
		return e->elementsByTagName("id").at(0).toElement().text() == Integrals_GeneratedQuestion().itemType();
	}
	GeneratedQuestion *get(QDomElement *el)
	{
		Integrals_GeneratedQuestion *r = new Integrals_GeneratedQuestion();
		r->setKey(el->elementsByTagName("key").at(0).toElement().text().toInt());
		r->setIntegralIndex(el->elementsByTagName("index").at(0).toElement().text().toInt());
		return r;
	}
};

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
	registerHelper(new Integrals_ReaderHelper());
	registerHelper(new Series_ReaderHelper());
	registerHelper(new Diffequ_ReaderHelper());
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


}}
