#pragma once
#include "tasknode.h"
#include <QImage>

class TaskMTRTable: public TaskNode
{
public:
	QString nodeType() const { return "taskmtrtable"; }

	virtual QList<QList<TaskNode *> > columns() const;
	virtual void setColumns(const QList<QList<TaskNode *> > &col);

	virtual const QString &title() const;
	virtual void setTitle (const QString &text);

	virtual const QString &description() const;
	virtual void setDescription (const QString &text);

	virtual const QImage &image() const;
	virtual const QString &imageFile() const;
	virtual void setImageFile (const QString &img);

	virtual const QList<QString> &columnTitles() const;
	virtual void setColumnTitles (const QList<QString> &titles);

private:
	QList<QString> _titles;
	QList< QList<TaskNode *> > _columns;
	QString _title;
	QString _description;
	QImage _image;
	QString _imagefile;
};

