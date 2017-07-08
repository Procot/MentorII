#pragma once
#include "../../../quiznode.h"
#include <QFrame>

class QuizCell : public QFrame
{
	Q_OBJECT
public:
	explicit QuizCell (QuizNode *node = NULL, QWidget *parent = 0);
	QuizNode *node() const;
	QuizCell *setNode (QuizNode *item);
signals:
	void enterNode (QuizNode *);
private:
	QuizNode *_node;
protected:
	qint64 mousePressedTime;
	QPoint mousePressedPos;
	virtual void mousePressEvent (QMouseEvent *);
	virtual void startDragOperation();
	virtual void timerEvent (QTimerEvent *e);
	virtual void mouseMoveEvent (QMouseEvent *e);
	virtual void mouseReleaseEvent (QMouseEvent *e);
};
