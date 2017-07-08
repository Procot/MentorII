#pragma once
#include "generatorhelper.h"

class Derivs_GeneratorHelper : public GeneratorHelper
{
public:
	static bool isValidID (const QString &id);
public:
	bool accept (QuizQuestion *q);
	GeneratedQuestion *get (QuizQuestion *q);
};
