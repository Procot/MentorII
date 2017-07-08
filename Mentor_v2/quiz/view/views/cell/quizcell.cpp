#include "quizcell.h"
#include <QTimerEvent>
#include <QMouseEvent>
#include <QDrag>
#include "../utils/utils.h"
#include <QDateTime>
#include <QApplication>
#include <QDebug>
#include <QMimeData>
QuizCell::QuizCell (QuizNode *item, QWidget *parent)
	: QFrame(parent)
{
	setNode(item);
	mousePressedTime = 0;
	mousePressedPos = QPoint();
	startTimer(100);
}

void QuizCell::mouseReleaseEvent (QMouseEvent *e)
{
	mousePressedTime = 0;
	QFrame::mouseReleaseEvent(e);
}

void QuizCell::mousePressEvent(QMouseEvent *e)
{
	mousePressedTime = QDateTime::currentMSecsSinceEpoch();
	mousePressedPos = e->pos();
	QFrame::mousePressEvent(e);
}

void QuizCell::mouseMoveEvent (QMouseEvent *e)
{
	QFrame::mouseMoveEvent(e);
	/*if (mousePressedTime && (mousePressedPos - e->pos()).manhattanLength() > QApplication::startDragDistance())
		QFrame::mouseReleaseEvent(e),
		startDragOperation();*/
}

void QuizCell::startDragOperation()
{
	mousePressedTime = 0;
	QDrag *drag = new QDrag(this);
	QMimeData *mimeData = new QMimeData;
	mimeData->setText("Hello");
	drag->setMimeData(mimeData);
	drag->setPixmap(QPixmap::fromImage(Utils::loadImage("ooo-calc.png")));
	Qt::DropAction dropAction = drag->exec();
}

void QuizCell::timerEvent (QTimerEvent *e)
{
	//if (mousePressedTime && QDateTime::currentMSecsSinceEpoch()-mousePressedTime > QApplication::startDragTime())
	//	startDragOperation();
}


QuizNode *QuizCell::node() const
{
	return _node;
}

QuizCell *QuizCell::setNode (QuizNode *item)
{
	_node = item;
	return this;
}

