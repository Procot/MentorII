/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   Chain of Responsibility pattern
 *  ---------------------------------
 *
 *   typedef Chain<QDomElement *, TaskNode *> TaskLoaderBase;
 *   typedef ChainHelper<QDomElement *, TaskNode *> TaskLoaderHelper;
 *
 *   class TaskGroupLoaderHelper: public TaskLoaderHelper {
 *   public:
 *       virtual bool accept (QDomElement *e);
 *       virtual TaskNode *get (QDomElement *e);
 *   };
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#pragma once
#include <QVector>
#include <QDebug>

template <typename fromT, typename toT>
class ChainHelper;

template <typename fromT, typename toT>
class Chain
{
public:
	virtual toT get (fromT value);
	virtual void registerHelper (ChainHelper<fromT, toT> *helper);
	virtual const QVector<ChainHelper<fromT, toT> *> &helpers();
	virtual void removeHelper (int index);
private:
	QVector<ChainHelper<fromT, toT> *> _helpers;
};

template <typename fromT, typename toT>
class ChainHelper
{
public:
	virtual toT get (fromT value) = 0;
	virtual bool accept (fromT value) = 0;
	virtual void setParent (Chain<fromT, toT> *p);
	virtual Chain<fromT, toT> *parent() const;
private:
	Chain<fromT, toT> *_parent;
};

/* -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- */

template <typename fromT, typename toT>
toT Chain<fromT, toT>::get (fromT value)
{
	for(int i=0; i<_helpers.count(); ++i)
		if (_helpers[i]->accept(value))
			return _helpers[i]->get(value);
	return toT();
}

/* -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- */

template <typename fromT, typename toT>
void Chain<fromT, toT>::registerHelper (ChainHelper<fromT, toT> *helper)
{
	_helpers.insert(0, helper);
	helper->setParent(this);
}

/* -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- */

template <typename fromT, typename toT>
const QVector<ChainHelper<fromT, toT> *> &Chain<fromT, toT>::helpers()
{
	return _helpers;
}

/* -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- */

template <typename fromT, typename toT>
void Chain<fromT, toT>::removeHelper (int index)
{
	_helpers.remove(index, 1);
}

/* -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- */

template <typename fromT, typename toT>
void ChainHelper<fromT, toT>::setParent (Chain<fromT, toT> *p)
{
	_parent = p;
}

/* -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- */

template <typename fromT, typename toT>
Chain<fromT, toT> *ChainHelper<fromT, toT>::parent() const
{
	return _parent;
}

/* -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- */
