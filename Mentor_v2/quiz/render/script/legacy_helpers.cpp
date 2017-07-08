#include "legacy_helpers.h"
#include "m_expressions.h"

QStringList stringtolist (char *str1)
{
    QStringList list;
    char *str = new char[BUFSZ]; strcpy(str, str1);
    char (*lines)[BUFSZ] = (char(*)[BUFSZ])new char[40][BUFSZ];
    int n = split_str(str, lines);
    for(int i=0; i<n; ++i)
        list << QString(lines[i]);
    delete lines;
    delete str;
    return list;
}


int shuffleAnswers (QList<QStringList> &answ)
{
    int rightIndex = 0;
    QList<QStringList> old = answ;

    QList<int> indices;
    for(int i=0; i<answ.count(); ++i)
        indices << i;

    for(int i=0; i<10; ++i)
    {
        int curIndex = qrand()%answ.count();
        int newIndex = qrand()%answ.count();
        if (curIndex == rightIndex)
            rightIndex = newIndex;
        int backup = indices[newIndex];
        indices[newIndex] = indices[curIndex];
        indices[curIndex] = backup;
    }

    for(int i=0; i<indices.count(); ++i)
    {
        answ[i] = old[indices[i]];
        if (indices[i]==0)
            rightIndex = i;
    }

    return rightIndex;
}

