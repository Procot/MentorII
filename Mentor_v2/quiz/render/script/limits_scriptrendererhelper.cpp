#include "limits_scriptrendererhelper.h"
#include "../../gen/limits_generatorhelper.h"
#include "../../gen/limits_generatedquestion.h"
#include "m_deriv.h" //limits.h"
#include <QRegExp>
#include "scriptrenderer.h"
#include "m_limits.h"
#include "legacy_helpers.h"

bool Limits_ScriptRendererHelper::accept (GeneratedQuestion *question)
{
	return question->itemType()==Limits_GeneratedQuestion().itemType();
}

char *gen_lim (char *all, int id, const range& r)
{
    char src[BUFSZ];
    switch(id)
    {
        case  1: lim111t (r, all, NULL, src); break;
        case  2: lim112t (r, all, NULL, src); break;
        case  3: lim113t (r, all, NULL, src); break;
        case  4: lim114t (r, all, NULL, src); break;
        case  5: lim115t (r, all, NULL, src); break;
        case  6: lim121t (r, all, NULL, src); break;
        case  7: lim122t (r, all, NULL, src); break;
        case  8: lim123t (r, all, NULL, src); break;
        case  9: lim124t (r, all, NULL, src); break;
        case 10: lim125t (r, all, NULL, src); break;
        case 11: lim126t (r, all, NULL, src); break;
        case 12: lim131t (r, all, NULL, src); break;
        case 13: lim132t (r, all, NULL, src); break;
        case 14: lim141t (r, all, NULL, src); break;
        case 15: lim151t (r, all, NULL, src); break;
        case 16: lim161t (r, all, NULL, src); break;
        case 17: lim211t (r, all, NULL, src); break;
        case 18: lim212t (r, all, NULL, src); break;
        case 19: lim221t (r, all, NULL, src); break;
        case 20: lim231t (r, all, NULL, src); break;
        case 21: lim241t (r, all, NULL, src); break;
        case 22: lim242t (r, all, NULL, src); break;
        case 23: lim243t (r, all, NULL, src); break;
        case 24: lim244t (r, all, NULL, src); break;
        case 25: lim245t (r, all, NULL, src); break;
        case 26: lim251t (r, all, NULL, src); break;
        case 27: lim252t (r, all, NULL, src); break;
        case 28: lim261t (r, all, NULL, src); break;
        case 29: lim262t (r, all, NULL, src); break;
        case 30: lim271t (r, all, NULL, src); break;
        case 31: lim281t (r, all, NULL, src); break;
        case 32: lim291t (r, all, NULL, src); break;
        case 33: lim311t (r, all, NULL, src); break;
        case 34: lim312t (r, all, NULL, src); break;
        case 35: lim313t (r, all, NULL, src); break;
        case 36: lim314t (r, all, NULL, src); break;
        case 37: lim315t (r, all, NULL, src); break;
        case 38: lim316t (r, all, NULL, src); break;
        case 39: lim317t (r, all, NULL, src); break;
        case 40: lim318t (r, all, NULL, src); break;
        case 41: lim319t (r, all, NULL, src); break;
        case 42: lim3110t (r, all, NULL, src); break;
        case 43: lim321t (r, all, NULL, src); break;
        case 44: lim322t (r, all, NULL, src); break;
        case 45: lim323t (r, all, NULL, src); break;
        case 46: lim324t (r, all, NULL, src); break;
        case 47: lim325t (r, all, NULL, src); break;
        case 48: lim326t (r, all, NULL, src); break;
        case 49: lim331t (r, all, NULL, src); break;
        case 50: lim332t (r, all, NULL, src); break;
        case 51: lim333t (r, all, NULL, src); break;
        case 52: lim334t (r, all, NULL, src); break;
        case 53: lim335t (r, all, NULL, src); break;
        case 54: lim336t (r, all, NULL, src); break;
        case 55: lim337t (r, all, NULL, src); break;
        case 56: lim338t (r, all, NULL, src); break;
        case 57: lim341t (r, all, NULL, src); break;
        case 58: lim342t (r, all, NULL, src); break;
        case 59: lim343t (r, all, NULL, src); break;
        case 60: lim344t (r, all, NULL, src); break;
        case 61: lim345t (r, all, NULL, src); break;
        case 62: lim346t (r, all, NULL, src); break;
        case 63: lim347t (r, all, NULL, src); break;
        case 64: lim348t (r, all, NULL, src); break;
        case 65: lim349t (r, all, NULL, src); break;
        case 66: lim3410t (r, all, NULL, src); break;
        case 67: lim3411t (r, all, NULL, src); break;
        case 68: lim3412t (r, all, NULL, src); break;
        case 69: lim3413t (r, all, NULL, src); break;
        case 70: lim411t (r, all, NULL, src); break;
        case 71: lim412t (r, all, NULL, src); break;
        case 72: lim413t (r, all, NULL, src); break;
        case 73: lim414t (r, all, NULL, src); break;
        case 74: lim421t (r, all, NULL, src); break;
        case 75: lim422t (r, all, NULL, src); break;
        case 76: lim423t (r, all, NULL, src); break;
        case 77: lim424t (r, all, NULL, src); break;
        case 78: lim431t (r, all, NULL, src); break;
        case 79: lim432t (r, all, NULL, src); break;
        case 80: lim433t (r, all, NULL, src); break;
        case 81: lim441t (r, all, NULL, src); break;
        case 82: lim442t (r, all, NULL, src); break;
        case 83: lim451t (r, all, NULL, src); break;
        case 84: lim461t (r, all, NULL, src); break;
        case 85: lim462t (r, all, NULL, src); break;
        case 86: lim471t (r, all, NULL, src); break;
        case 87: lim481t (r, all, NULL, src); break;
        case 88: lim482t (r, all, NULL, src); break;
        case 89: lim483t (r, all, NULL, src); break;
        case 90: lim491t (r, all, NULL, src); break;
        case 91: lim492t (r, all, NULL, src); break;
        case 92: lim511t (r, all, NULL, src); break;
        case 93: lim512t (r, all, NULL, src); break;
        case 94: lim513t (r, all, NULL, src); break;
        case 95: lim514t (r, all, NULL, src); break;
        case 96: lim515t (r, all, NULL, src); break;
        case 97: lim516t (r, all, NULL, src); break;
        case 98: lim521t (r, all, NULL, src); break;
        case 99: lim522t (r, all, NULL, src); break;
        case 100: lim523t (r, all, NULL, src); break;
        case 101: lim524t (r, all, NULL, src); break;
        case 102: lim525t (r, all, NULL, src); break;
        case 103: lim531t (r, all, NULL, src); break;
        case 104: lim532t (r, all, NULL, src); break;
        case 105: lim533t (r, all, NULL, src); break;
        case 106: lim541t (r, all, NULL, src); break;
        case 107: lim542t (r, all, NULL, src); break;
        case 108: lim543t (r, all, NULL, src); break;
        case 109: lim544t (r, all, NULL, src); break;
        case 110: lim545t (r, all, NULL, src); break;
        case 111: lim546t (r, all, NULL, src); break;
        case 112: lim547t (r, all, NULL, src); break;
        // invalid limit! error
    }

    /*
    char buf[1000];
    FILE *f = fopen(chprintf(buf, "c:\\46\\%d.txt", id), "wt");
    if (f) fprintf(f, "String(\"%d.  \")&%s", id, src), fclose(f);
    */

    return all;
}


QuestionScript Limits_ScriptRendererHelper::get (GeneratedQuestion *q)
{
	QuestionScript result;
	range r(-5,5);

    Limits_GeneratedQuestion *qq = (Limits_GeneratedQuestion *)q;
	srand(qq->key());

    QStringList task;

    bool done;
    int typeoflim = qq->limitIndex();
    char lim[1000]="", sol[1000], all[1000];

    gen_lim(all, typeoflim, r);
    split_lim (all, lim, sol);

    task << "String(\"Вычислить предел:\")";

    char lim1[1000];
    task << QString(lim) + "=...";

    int i;

    const int answc=5;
    char answ[answc][1000];
    r=range(-10,10);

    /////////////////////////////////////////
    int values=2;
    int answer=0;
    int j;
    char isol[1000], ilim[1000];
    strcpy(answ[answer++], sol);
    char buf[10][BUFSZ];
    for(i=0; i<answc-1; ++i)
    {
        int tries=0;
        bool invalid;
        do{
            if (tries>10 || i>=values)
            {
                switch(rand()%4)
                {
                    case 0: sprintf(all,"=0"); break;
                    case 1: sprintf(all,"=inf"); break;
                    case 2: sprintf(all,"=%s", fraction(buf[0],rand()%10,1,rand()%10+1)); break;
                    case 3: sprintf(all,"=1"); break;
                    default: sprintf(all, "=-1"); break;
                }
            }
            else
                gen_lim(all, typeoflim, r);
            split_lim(all, ilim, isol);

            for(invalid=false, j=0; j<answer && !invalid; ++j)
            {
                if (!strcmp(isol, answ[j]))
                    invalid=true;
                else if (!strcmp(answ[j]+1,"inf") && !strcmp(isol,"inf"))
                    invalid=true;
            }
            tries++;
        }while (invalid);
        strcpy(answ[answer++], isol);
    }

    QList<QStringList> answers;
    for(int i=0; i<answc; ++i)
        answers << (QStringList() << QString(lim) + "=" + answ[i]);
    int right = shuffleAnswers(answers);

    QStringList solution;
    solution << QString(lim) + "=" + answ[0];

    result.setAnswers(answers);
    result.setRight(right);
    result.setSolution(solution);
    result.setTask(task);

    return result;
}

