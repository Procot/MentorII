#pragma once
#include "xmlquizfile_structure.h"

namespace xmlquizfile { namespace structure {

//----------------------------------------------------------

class QuizGroup_ReaderHelper: public ReaderHelper
{
public:
	virtual bool accept (QDomElement *);
	virtual QuizNode *get (QDomElement *);
};

//----------------------------------------------------------

class QuizGroup_WriterHelper: public WriterHelper
{
public:
    virtual void get (QuizNode *node);
    virtual bool accept (QuizNode *node);
};

//----------------------------------------------------------

}}
