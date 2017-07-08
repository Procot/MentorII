#pragma once
#include "generatorhelper.h"

class Limits_GeneratorHelper : public GeneratorHelper
{
public:
	static bool isValidID (const QString &id);
public:
	bool accept (QuizQuestion *q);
	GeneratedQuestion *get (QuizQuestion *q);
};
