#pragma once
#include "../../gen/generatedquestion.h"
#include <QImage>
#include <QFont>

class QuizVariant;
class ImageRenderer
{
public:
	static ImageRenderer *instance();
    QList<QImage> getVariant (QuizVariant *v, bool answers, bool solution); //int number, const QList<GeneratedQuestion *> &questions);
	ImageRenderer();
	void setFont (const QFont &font);
private:
	QFont _font;
};

