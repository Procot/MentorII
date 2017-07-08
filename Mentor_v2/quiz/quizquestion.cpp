#include "quizquestion.h"
#include "../utils/utils.h"

void QuizQuestion::editProperties()
{
    QuizNode::editProperties();
}

const QImage &QuizQuestion::image() const
{
	return _image;
}

const QString &QuizQuestion::imageFile() const
{
	return _imagefile;
}

void QuizQuestion::setImageFile (const QString &file)
{
	_imagefile = file;
	_image = Utils::loadImage(_imagefile);
}

const QString &QuizQuestion::ID() const
{
	return this->_id;
}

void QuizQuestion::setID (const QString &text)
{
	_id = text;
}

QList<QuizQuestion *> QuizQuestion::questions()
{
	return (QList<QuizQuestion *>() << this);
}

