#pragma once
#include "quiznode.h"
#include <QImage>

class QuizGroupFilter;
class QuizGroup : public QuizNode
{
public:
    QuizGroup();
	virtual ~QuizGroup();

	virtual QString itemType() const { return "quizgroup"; }

	virtual const QString &title() const;
	virtual void setTitle (const QString &text);

	virtual const QString &description() const;
	virtual void setDescription (const QString &text);

	virtual const QImage &image() const;
	virtual const QString &imageFile() const;
	virtual void setImageFile (const QString &filename);

	virtual const QList<QuizNode *> children() const;
	virtual void addChild (QuizNode *newchild);
	virtual void removeChildAt (int index);
	virtual QuizNode *takeChildAt (int index);
	virtual void insertChildAt (int index, QuizNode *child);

	virtual QList<QuizQuestion *> questions();

	virtual QList<QuizGroupFilter *> filters() const;
	virtual void addFilter (QuizGroupFilter *newFilter);
	virtual void removeFilterAt (int index);
	virtual QuizGroupFilter *takeFilterAt (int index);
	virtual void insertFilterAt (int index, QuizGroupFilter *child);

    virtual void editProperties();
    virtual bool hasProperties() const;

private:
	QString _title, _description;
	QImage _image;
	QString _imagefile;
	QList<QuizNode *> _children;
	QList<QuizGroupFilter *> _filters;
};

