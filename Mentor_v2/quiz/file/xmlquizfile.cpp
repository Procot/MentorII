#include "xmlquizfile.h"
#include <QFile>
#include "../quiz.h"
#include <QXmlStreamWriter>
#include <QTextStream>
#include "../quiz/quizvariant.h"
#include "xmlquizfile_structure.h"
#include "xmlquizfile_variants.h"
#include <QDebug>
#include <QDataStream>


XMLQuizFile *XMLQuizFile::instance()
{
	static XMLQuizFile fil;
	return &fil;
}

XMLQuizFile::XMLQuizFile()
{
}

Quiz *XMLQuizFile::load (const QString &fil)
{
	QString filename = fil;
	QDomDocument doc;

	QFile file(filename);
	if (!file.open(QIODevice::ReadOnly))
		throw 1;

	QByteArray data = file.readAll();

	/*QFile filefile("d:\\1.dat");
	filefile.open(QIODevice::WriteOnly);
	QTextStream stream(&filefile);
	stream << QString(data);
	filefile.close();*/

	doc.setContent(QString(data));

	Quiz *quiz = new Quiz();

	QDomElement el = doc.documentElement();
	if (el.tagName()!="quiz" || el.attribute("version", "1.0")!="1.0")
		throw 1;

    quiz->setStructure(xmlquizfile::structure::Reader().get(
			&el.elementsByTagName("structure").at(0).toElement().elementsByTagName("group").at(0).toElement())
	);

	QDomNodeList variantgroups = el.elementsByTagName("variants").at(0).toElement().elementsByTagName("variant_group");

    xmlquizfile::variants::Reader qvr;
	for(int i=0; i<variantgroups.count(); ++i)
	{
		QDomElement vgroup = variantgroups.at(i).toElement();
		QDomNodeList variants = vgroup.elementsByTagName("variant");
		quiz->addVariantGroup();
		for(int v=0; v<variants.count(); ++v)
		{
			QDomElement variant = variants.at(v).toElement();
			QDomNodeList questions = variant.elementsByTagName("generated_question");
			int number = variant.elementsByTagName("number").at(0).toElement().text().toInt();
			QList<GeneratedQuestion *> generated;
			for(int j=0; j<questions.count(); ++j)
				generated << qvr.get(&questions.at(j).toElement());
			quiz->addVariant(i, new QuizVariant(number, generated));
		}
	}

	return quiz;
}

QString XMLQuizFile::serializeNodes (const QList<QuizNode *> &nodes)
{
	QString str;
	QXmlStreamWriter w(&str);
	w.setCodec("UTF-8");
	w.setAutoFormatting(true);
	w.writeStartDocument("1.0");
	w.writeStartElement("nodes");
	for(int i=0; i<nodes.count(); ++i)
        xmlquizfile::structure::Writer(&w).get(nodes.at(i));
	w.writeEndElement();
	w.writeEndDocument();
	return str;
}

QList<QuizNode *> XMLQuizFile::deserializeNodes (const QString &xml)
{
	return QList<QuizNode *>();
}

void XMLQuizFile::save (const QString &filename, Quiz *quiz)
{
	QString str;
	QXmlStreamWriter w(&str);
	w.setCodec("UTF-8");
	w.setAutoFormatting(true);
	w.writeStartDocument("1.0");
	w.writeStartElement("quiz");
	w.writeAttribute("version", "1.0");

	w.writeStartElement("structure");
    xmlquizfile::structure::Writer(&w).get(quiz->structure());
	w.writeEndElement();

	w.writeStartElement("variants");
	for(int i=0; i<quiz->variants().count(); ++i)
	{
		w.writeStartElement("variant_group");
		for(int j=0; j<quiz->variants().at(i).count(); ++j)
		{
			QuizVariant *v = quiz->variants().at(i).at(j);
			w.writeStartElement("variant");
			w.writeStartElement("number");
			w.writeCharacters(QString::number(v->number()));
			w.writeEndElement();

            xmlquizfile::variants::Writer qvw(&w);
			for(int k=0; k<v->generated().count(); ++k)
				qvw.get(v->generated().at(k));

			w.writeEndElement();
		}
		w.writeEndElement();
	}
	w.writeEndElement();

	w.writeEndElement();
	w.writeEndDocument();

	QFile file(filename);
	if (!file.open(QIODevice::WriteOnly | QIODevice::Truncate))
		throw 1;
	QTextStream stream(&file);
	stream << str;
	file.close();

}
