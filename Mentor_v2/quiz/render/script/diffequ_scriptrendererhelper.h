#pragma once
#include "scriptrendererhelper.h"

class diffequ_ScriptRendererHelper : public ScriptRendererHelper
{
public:
	bool accept(GeneratedQuestion *q) { return true; }
	QuestionScript get(GeneratedQuestion *q) { return QuestionScript(); }
};