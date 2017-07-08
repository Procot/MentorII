#include "taskquestion.h"
#include "../utils/utils.h"

const QString &TaskQuestion::ID() const
{
	return _id;
}

void TaskQuestion::setID(const QString &id)
{
	_id = id;
}

const QString &TaskQuestion::title() const
{
	return _title;
}

void TaskQuestion::setTitle (const QString &text)
{
	_title = text;
}

const QString &TaskQuestion::description() const
{
	return _description;
}

void TaskQuestion::setDescription (const QString &text)
{
	_description = text;
}

const QImage &TaskQuestion::image() const
{
	return _image;
}

const QString &TaskQuestion::imageFile() const
{
	return _imagefile;
}

void TaskQuestion::setImageFile (const QString &image)
{
	_imagefile = image;
	_image = Utils::loadImage(_imagefile);
}
