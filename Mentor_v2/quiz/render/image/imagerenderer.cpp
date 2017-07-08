#include "imagerenderer.h"
#include "../script/print/printscriptrenderer.h"
#include "../../../utils/txttobmp.h"
#include <QDebug>

ImageRenderer *ImageRenderer::instance()
{
	static ImageRenderer rend;
	return &rend;
}

QList<QImage> ImageRenderer::getVariant (QuizVariant *v, bool answers, bool solution)
{
	int number = v->number();
	const QList<GeneratedQuestion *> &questions = v->generated();
	QList<PrintScript> str = PrintScriptRenderer::instance()->getVariant(v);//number, questions);
	QList<QImage> images;
	for(int i=0; i<str.count(); ++i)
	{
		/*
		QStringList script;
		script << QString("String(\"")
						+ "Вариант " + QString::number(number)
						+ ", "
						+ "задача " + QString::number(i+1)
						+ ".\")";
		script << str[i].task();
		script << "String(\"Ответ a):\")" << str[i].answers().at(0) << "String( )";
		script << "String(\"Ответ b):\")" << str[i].answers().at(1) << "String( )";
		script << "String(\"Ответ c):\")" << str[i].answers().at(2) << "String( )";
		script << "String(\"Ответ d):\")" << str[i].answers().at(3) << "String( )";
		script << "String(\"--------------------------------------------------------------------------\")";
		script << "String(\"Решение: вариант " + QString::number(number) + ", задача " + QString::number(i+1) + ".\")";
		script << str[i].task();
		script << "String(\"Правильный ответ " + (QStringList() << "a" << "b" << "c" << "d")[str[i].right()] + "):\")";
		script << str[i].solution();
		*/

        QStringList script;
        script << str[i].task;
        if (answers) script << str[i].answers;
        if (solution)
            script  << (QStringList() << "String(\"-----------------------------------------------------\")")
                    << str[i].solution;

        images << TxtToBmp::instance()->convert(script);
	}

	return images;
}

ImageRenderer::ImageRenderer()
{
}

void ImageRenderer::setFont (const QFont &font)
{
	this->_font = font;
}

