

#include "webrenderer.h"
#include <QFile>
#include <QDir>
#include <QTextStream>
#include "../script/print/printscriptrenderer.h"
#include "../utils/txttobmp.h"
#include "../../quizgroup.h"
#include <QDebug>
#include "../web/convert_to_tex.h"
#include <QApplication>
#include <QProcess>
#include <QStringList>

WebRenderer *WebRenderer::instance()
{
	static WebRenderer inst;
	return &inst;
}

void WebRenderer::render (Quiz *quiz, const QString &path, WebCallback *callback)
{
    int totalQuestions = 0;
    int processed = 0;
    for(int group=0; group<quiz->variants().count(); ++group)
    {
        const QList<QuizVariant *> &variants = quiz->variants().at(group);
        for(int variant=0; variant<variants.count(); ++variant)
            totalQuestions += variants.at(variant)->generated().count();
    }
    qDebug() << "Total questions to generate: " << totalQuestions;

    if (callback) callback->started(totalQuestions);
    for(int group=0; group<quiz->variants().count(); ++group)
    {
        QList<QuizVariant *> variants = quiz->variants().at(group);

        QString varpath = path + "/" + QString::number(group+1);
        QDir vardir = QDir(varpath);
        if (!vardir.exists())
        {
            vardir.cdUp();
            vardir.mkpath(QString::number(group+1));
        }

		QString kurse="Курс";
        QFile number(varpath + "/Number.txt");
        if (number.open(QIODevice::Text | QIODevice::WriteOnly))
        {
            QTextStream stream(&number);
            //stream.setCodec("windows-1251");
            stream << kurse << "\n";
            stream << ((QuizGroup *)quiz->structure())->title() << "\n";
            stream << variants.count() << "\n";
            stream << variants.at(0)->generated().count() << "\n";
            number.close();
        }

        QFile file(varpath + "/right.txt");
        if (!file.open(QIODevice::Text | QIODevice::WriteOnly))
            throw 1;
        QTextStream right(&file);
        right.setCodec("windows-1251");

		 


        for(int i=0; i<variants.count(); ++i)
        {

            QList<PrintScript> list = PrintScriptRenderer::instance()->getVariant(variants.at(i));
            for(int j=0; j<list.count(); ++j)
            {
                QStringList script;
                script << list[j].task << list[j].answers;
				


				
                TxtToBmp::instance()->convert(script).save(
                            varpath + "/Image_" + QString::number(i+1) + "_zad_" + QString::number(j+1) + ".jpg",
                            "JPG"
                );
				QFile tmp(varpath + "/texcode_" + QString::number(i+1) + "_zad_" + QString::number(j+1) + ".txt");
				tmp.open(QIODevice::WriteOnly);
				QTextStream tmps(&tmp);
				tmps.setCodec("cp1251");
				for(int i=0; i<script.count(); ++i)
				{
					 //script[i] =cnvt_tex(script[i]);
					 tmps << script[i] << "\n";
				}
				tmp.close(); 

                right << QString::number(list[j].right + 1 ) << "\n";
                if (callback)
                {
                    callback->progress(++processed, totalQuestions);
                    if (callback->isCancelled())
                    {
                        file.close();
                        return;
                    }
                }
            }
        }
		
        file.close();
		QString webname=path.mid(path.lastIndexOf("/")+1);
		QString workdirweb = QApplication::applicationDirPath() + "/toMoodleXML/";
		QString	webutil=workdirweb+"toMoodleXML.exe";
		QStringList argum;
		argum <<"-d" << varpath << "-c" << webname;

		QProcess p;
		p.setWorkingDirectory(workdirweb);
		p.start(webutil,argum);
		p.waitForFinished();
    }
    if (callback) callback->done();
}
