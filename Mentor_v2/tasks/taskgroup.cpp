#include "taskgroup.h"
#include "../utils/utils.h"


//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//


const QString &TaskGroup::title() const
{
	return _title;
}

void TaskGroup::setTitle (const QString &text)
{
	_title = text;
}


//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//


const QString &TaskGroup::description() const
{
	return _description;
}

void TaskGroup::setDescription (const QString &text)
{
	_description = text;
}


//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//


const QImage &TaskGroup::image() const
{
	return _image;
}

const QString &TaskGroup::imageFile() const
{
	return _imagefile;
}

void TaskGroup::setImageFile (const QString &img)
{
	_imagefile = img;
	_image = Utils::loadImage(_imagefile);
}


//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//


const QList<TaskNode *> TaskGroup::children() const
{
	return _children;
}

void TaskGroup::addChild (TaskNode *child)
{
	_children.append(child);
	child->setParent(this);
}


//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//

