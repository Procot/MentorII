#include "xmlquizfile_structure.h"
#include "quizgroup_xmlquizfile_structure_helper.h"
#include "quizquestion_xmlquizfile_structure_helper.h"
#include "../quiz/quizgroup.h"
#include "../quiz/quizquestion.h"

namespace xmlquizfile { namespace structure {


///////////////////////////////////////////////////////////////////


Reader::Reader()
{
    registerHelper(new QuizGroup_ReaderHelper());
    registerHelper(new QuizQuestion_ReaderHelper());
}


///////////////////////////////////////////////////////////////////


Writer::Writer (QXmlStreamWriter *writer)
{
    _writer = writer;
    registerHelper(new QuizGroup_WriterHelper());
    registerHelper(new QuizQuestion_WriterHelper());
}

QXmlStreamWriter *Writer::writer()
{
    return _writer;
}


////////////////////////////////////////////////////////////////////


}}
