#pragma once
#include "quizfile.h"
#include "../utils/chain.h"
#include "QDomElement"
#include "../quiz/quiznode.h"

class XMLQuizFile: public QuizFile
{
public:
	static XMLQuizFile *instance();
public:
	XMLQuizFile();
	virtual Quiz *load (const QString &filename);
	virtual void save (const QString &filename, Quiz *quiz);
	virtual QList<QuizNode *> deserializeNodes (const QString &xml);
	virtual QString serializeNodes (const QList<QuizNode *> &nodes);
};
