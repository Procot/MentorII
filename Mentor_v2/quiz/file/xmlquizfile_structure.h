#pragma once
#include "../utils/chain.h"
#include "../quiz/quiznode.h"
#include <QDomElement>
#include <QXmlStreamWriter>

namespace xmlquizfile { namespace structure {

///////////////////////////////////////////////////////////

typedef ChainHelper<QDomElement *, QuizNode *> ReaderHelper;
class Reader: public Chain<QDomElement *, QuizNode *>
{
public:
    Reader();
};

///////////////////////////////////////////////////////////

typedef ChainHelper<QuizNode *, void> WriterHelper;
class Writer: public Chain<QuizNode *, void>
{
public:
    Writer (QXmlStreamWriter *writer);
    QXmlStreamWriter *writer();
private:
    QXmlStreamWriter *_writer;
};

///////////////////////////////////////////////////////////

}}
