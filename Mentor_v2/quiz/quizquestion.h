#pragma once
#include "quiznode.h"
#include <QString>
#include <QImage>

class QuizQuestionData;
class QuizQuestion : public QuizNode
{
public:
	virtual QString itemType() const { return "quizquestion"; }

	virtual const QImage &image() const;
	virtual const QString &imageFile() const;
	virtual void setImageFile (const QString &filename);

	virtual const QString &ID() const;
	virtual void setID (const QString &text);

	virtual QList<QuizQuestion *> questions();

    virtual void editProperties();

private:
	QString _id, _title, _description;
	QImage _image; QString _imagefile;
};

