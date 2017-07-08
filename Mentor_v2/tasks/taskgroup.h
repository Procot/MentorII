#pragma once
#include <QString>
#include <QImage>
#include "tasknode.h"

class TaskGroup: public TaskNode
{
public:
	QString nodeType() const { return "taskgroup"; }

	virtual const QString &title() const;
	virtual void setTitle (const QString &text);

	virtual const QString &description() const;
	virtual void setDescription (const QString &text);

	virtual const QImage &image() const;
	virtual const QString &imageFile() const;
	virtual void setImageFile (const QString &img);

	virtual const QList<TaskNode *> children() const;
	virtual void addChild (TaskNode *child);

private:
	QList<TaskNode *> _children;
	QString _title;
	QString _description;
	QImage _image;
	QString _imagefile;
};
