#pragma once
#include "scriptrendererhelper.h"

class Derivs_ScriptRendererHelper : public ScriptRendererHelper
{
public:
	bool accept (GeneratedQuestion *q);
	QuestionScript get (GeneratedQuestion *q);
};

