#pragma once
#include <QString>

class Quiz;
class QuizFile
{
public:
	virtual Quiz *load (const QString &filename) = 0;
	virtual void save (const QString &filename, Quiz *quiz) = 0;
};

