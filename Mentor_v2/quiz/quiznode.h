#pragma once
#include <QList>
#include "quiznode.h"
#include <QXmlStreamWriter>

class Quiz;
class QuizQuestion;
class QuizNode : public QObject
{
    Q_OBJECT
public:
	virtual QString itemType() const = 0;
	QuizNode();
    virtual ~QuizNode() {}
	virtual QList<QuizQuestion *> questions() = 0;
	virtual QuizNode *parent() const;
	virtual void setParent (QuizNode *newparent);
	Quiz *quiz() const;
	void setQuiz (Quiz *newquiz);

    virtual void editProperties();
    virtual bool hasProperties() const;

signals:
    void updateNotify();

private:
	Quiz *_quiz;
	QuizNode *_parent;
};

