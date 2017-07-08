#pragma once
#include <QString>
#include <QImage>
#include "tasknode.h"

class TaskQuestion: public TaskNode
{
public:
	QString nodeType() const { return "taskquestion"; }

	virtual const QString &title() const;
	virtual void setTitle (const QString &text);

	virtual const QString &description() const;
	virtual void setDescription (const QString &text);

	virtual const QImage &image() const;
	virtual const QString &imageFile() const;
	virtual void setImageFile (const QString &image);

	virtual const QString &ID() const;
	virtual void setID (const QString &id);

private:
	QImage _image;
	QString _imagefile;
	QString _id;
	QString _title;
	QString _description;
};
