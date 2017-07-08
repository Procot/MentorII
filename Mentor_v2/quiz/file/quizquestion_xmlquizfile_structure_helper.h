#pragma once
#include "xmlquizfile_structure.h"

namespace xmlquizfile { namespace structure {

//--------------------------------------------------------

class QuizQuestion_ReaderHelper: public ReaderHelper
{
public:
	virtual bool accept (QDomElement *);
	virtual QuizNode *get (QDomElement *);
};

//--------------------------------------------------------

class QuizQuestion_WriterHelper: public WriterHelper
{
public:
    virtual bool accept (QuizNode *node);
    virtual void get (QuizNode *node);
};

//--------------------------------------------------------

}}
