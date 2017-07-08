#include "quizgroup.h"
#include "../quiz/filter/group/quizgroupfilter.h"
#include "../utils/utils.h"
#include <QDebug>
#include "quizgroup_dlgproperties.h"

bool QuizGroup::hasProperties() const
{
    return true;
}

void QuizGroup::editProperties()
{
    if (dlgQuizGroupProperties(this).exec() == QDialog::Accepted);
        emit updateNotify();
}

QuizGroup::QuizGroup()
{
    _title = "";
    _description = "";
    _imagefile = "";
    _children.clear();
    _filters.clear();
}

QuizGroup::~QuizGroup()
{
	for(int i=0; i<_children.count(); ++i)
		delete _children.at(i);
}

const QString &QuizGroup::title() const
{
	return this->_title;
}

void QuizGroup::setTitle (const QString &text)
{
	_title = text;
}

const QString &QuizGroup::description() const
{
	return _description;
}

void QuizGroup::setDescription (const QString &text)
{
	_description = text;
}

const QImage &QuizGroup::image() const
{
	return _image;
}

const QString &QuizGroup::imageFile() const
{
	return _imagefile;
}

void QuizGroup::setImageFile (const QString &file)
{
	_imagefile = file;
	_image = Utils::loadImage(_imagefile);
}

const QList<QuizNode *> QuizGroup::children() const
{
	return this->_children;
}

void QuizGroup::addChild (QuizNode *newchild)
{
	_children.append(newchild);
	newchild->setParent(this);
}

void QuizGroup::removeChildAt (int index)
{
	delete _children.at(index);
	_children.removeAt(index);
}

QuizNode *QuizGroup::takeChildAt (int index)
{
	QuizNode *child = _children.at(index);
	_children.removeAt(index);
	return child;
}

void QuizGroup::insertChildAt (int index, QuizNode *child)
{
	_children.insert(index, child);
	child->setParent(this);
}

QList<QuizQuestion *> QuizGroup::questions()
{
	QList<QuizQuestion *> list;
	for(int i=0; i<children().count(); ++i)
		list << children()[i]->questions();
	for(int i=0; i<_filters.count(); ++i)
		list = _filters[i]->questions(list);
	return list;
}

QList<QuizGroupFilter *> QuizGroup::filters() const
{
	return _filters;
}

void QuizGroup::addFilter (QuizGroupFilter *newFilter)
{
	_filters.insert(0, newFilter);
	newFilter->setParent(this);
}

void QuizGroup::removeFilterAt (int index)
{
	delete _filters.at(index);
	_filters.removeAt(index);
}

QuizGroupFilter *QuizGroup::takeFilterAt (int index)
{
	QuizGroupFilter *filter = _filters.at(index);
	_filters.removeAt(index);
	return filter;
}

void QuizGroup::insertFilterAt (int index, QuizGroupFilter *filter)
{
	_filters.insert(index, filter);
	filter->setParent(this);
}

