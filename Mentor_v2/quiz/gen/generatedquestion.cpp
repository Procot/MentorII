#include "generatedquestion.h"

/*
QString GeneratedQuestion::ID()
{
	return this->_question->ID();
}
*/

GeneratedQuestion::GeneratedQuestion (QuizQuestion *question)
	: _question(question)
{
}

