#pragma once
#include "../utils/chain.h"
#include "../quiz/gen/generatedquestion.h"
#include <QDomElement>

namespace xmlquizfile { namespace variants {


class Writer : public Chain<GeneratedQuestion *, void>
{
public:
    Writer (QXmlStreamWriter *writer);
	QXmlStreamWriter *writer();
private:
	QXmlStreamWriter *_writer;
};


class Reader: public Chain<QDomElement *, GeneratedQuestion *>
{
public:
    Reader();
};


}}
