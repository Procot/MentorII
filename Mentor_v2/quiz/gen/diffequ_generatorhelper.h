#pragma once
#include "generatorhelper.h"

class diffequ_GeneratorHelper : public GeneratorHelper
{
public:
	static bool isValidID (const QString &id);
public:
	bool accept(QuizQuestion *q) { return true; }
	GeneratedQuestion *get(QuizQuestion *q) { return NULL; }
};
