#pragma once
#include "../../utils/chain.h"
#include "../quizquestion.h"
#include "generatedquestion.h"

typedef ChainHelper<QuizQuestion *, GeneratedQuestion *> GeneratorHelper;

