#pragma once
#include <QDomElement>
#include "../utils/chain.h"
#include "../quiz/filter/group/quizgroupfilter.h"

namespace xmlquizfile {
namespace xmlquizfile_quizgroupfilter {



typedef ChainHelper<QDomElement *, QuizGroupFilter *> ReaderHelper;
class Reader: public Chain<QDomElement *, QuizGroupFilter *>
{
public:
    Reader();
};


typedef ChainHelper<QuizGroupFilter *, void> WriterHelper;
class Writer: public Chain<QuizGroupFilter *, void>
{
public:
    Writer (QXmlStreamWriter *w);
    QXmlStreamWriter *writer() { return _writer; }
private:
    QXmlStreamWriter *_writer;
};



}
}
