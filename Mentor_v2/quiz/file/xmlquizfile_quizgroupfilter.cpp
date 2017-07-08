#include "xmlquizfile_quizgroupfilter.h"
#include "../quiz/filter/group/random_quizgroupfilter.h"
#include "../quiz/filter/group/shuffle_quizgroupfilter.h"

namespace xmlquizfile {
namespace xmlquizfile_quizgroupfilter {


class RandomQuizGroupFilter_ReaderHelper: public ReaderHelper
{
public:
    virtual bool accept (QDomElement *value)
    {
        return value->tagName()=="random";
    }
    virtual QuizGroupFilter *get (QDomElement *value)
    {
        return new RandomQuizGroupFilter();
    }
};

class ShuffleQuizGroupFilter_ReaderHelper: public ReaderHelper
{
public:
    virtual bool accept (QDomElement *value)
    {
        return value->tagName()=="shuffle";
    }
    virtual QuizGroupFilter *get (QDomElement *value)
    {
        return new ShuffleQuizGroupFilter();
    }
};

Reader::Reader()
{
    registerHelper(new RandomQuizGroupFilter_ReaderHelper());
    registerHelper(new ShuffleQuizGroupFilter_ReaderHelper());
}




class RandomQuizGroupFilter_WriterHelper: public WriterHelper
{
public:
    virtual bool accept (QuizGroupFilter *f)
    {
        return f->itemType()==RandomQuizGroupFilter().itemType();
    }
    virtual void get (QuizGroupFilter *f)
    {
        QXmlStreamWriter *wr = ((Writer *)parent())->writer();
        wr->writeStartElement("random");
        wr->writeEndElement();
    }
};

class ShuffleQuizGroupFilter_WriterHelper: public WriterHelper
{
public:
    virtual bool accept (QuizGroupFilter *f)
    {
        return f->itemType()==ShuffleQuizGroupFilter().itemType();
    }
    virtual void get (QuizGroupFilter *f)
    {
        QXmlStreamWriter *wr = ((Writer *)parent())->writer();
        wr->writeStartElement("shuffle");
        wr->writeEndElement();
    }
};

Writer::Writer (QXmlStreamWriter *w)
    : _writer(w)
{
    registerHelper(new RandomQuizGroupFilter_WriterHelper());
    registerHelper(new ShuffleQuizGroupFilter_WriterHelper());
}







}
}
