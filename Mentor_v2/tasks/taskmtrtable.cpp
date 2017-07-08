#include "taskmtrtable.h"
#include "../utils/utils.h"

QList<QList<TaskNode *> > TaskMTRTable::columns() const
{
	return _columns;
}

void TaskMTRTable::setColumns(const QList<QList<TaskNode *> > &col)
{
	for(int i=0; i<col.count(); ++i)
		for(int j=0; j<col[i].count(); ++j)
			col[i][j]->setParent(this);
	_columns = col;
}

const QString &TaskMTRTable::title() const
{
	return _title;
}

void TaskMTRTable::setTitle (const QString &text)
{
	_title = text;
}

const QString &TaskMTRTable::description() const
{
	return _description;
}

void TaskMTRTable::setDescription (const QString &text)
{
	_description = text;
}

const QImage &TaskMTRTable::image() const
{
	return _image;
}

const QString &TaskMTRTable::imageFile() const
{
	return _imagefile;
}

void TaskMTRTable::setImageFile (const QString &img)
{
	_imagefile = img;
	_image = Utils::loadImage(_imagefile);
}

const QList<QString> &TaskMTRTable::columnTitles() const
{
	return _titles;
}

void TaskMTRTable::setColumnTitles (const QList<QString> &titles)
{
	_titles = titles;
}

