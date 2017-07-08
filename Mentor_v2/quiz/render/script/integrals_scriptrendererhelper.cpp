#include "integrals_scriptrendererhelper.h"
#include "../../gen/integrals_generatorhelper.h"
#include "../../gen/integrals_generatedquestion.h"
#include "m_integ.h"
#include "m_integ0xxb.h"
#include "m_integ2.h"
#include "m_integ_a01.h"
#include "m_integ_a02.h"
#include "m_integ_a03.h"
#include <QRegExp>
#include "scriptrenderer.h"
#include "m_limits.h"
#include "legacy_helpers.h"

bool Integrals_ScriptRendererHelper::accept (GeneratedQuestion *question)
{
    return question->itemType()==Integrals_GeneratedQuestion().itemType();
}


QuestionScript Integrals_ScriptRendererHelper::get (GeneratedQuestion *q)
{
    QuestionScript result;
    range r(-5,5);
    char task[BUFSZ];
    char answers[5][BUFSZ];
    char src[BUFSZ];

    Integrals_GeneratedQuestion *qq = (Integrals_GeneratedQuestion *)q;
    srand(qq->key());
    switch(qq->integralIndex())
    {
        case 1: integ101b (r, task, answers, src); break;
        case 2: integ102b (r, task, answers, src); break;
        case 3: integ103b (r, task, answers, src); break;
        case 4: integ104b (r, task, answers, src); break;
        case 5: //integ105b (r, task, answers, src); break;
        case 6: integ106b (r, task, answers, src); break;
        case 7: integ107b (r, task, answers, src); break;
        case 8: integ108b (r, task, answers, src); break;
        case 9: integ109b (r, task, answers, src); break;
        case 10: integ110b (r, task, answers, src); break;
        case 11: integ111b (r, task, answers, src); break;
        case 12: integ112b (r, task, answers, src); break;
        case 13: integ113b (r, task, answers, src); break;
        case 14: integ114b (r, task, answers, src); break;
        case 15: integ115b (r, task, answers, src); break;
        case 16: //integ116b (r, task, answers, src); break;
        case 17: //integ117b (r, task, answers, src); break;
        case 18: integ118b (r, task, answers, src); break;
        case 19: integ119b (r, task, answers, src); break;
        case 20: integ120b (r, task, answers, src); break;
        case 21: integ121b (r, task, answers, src); break;
        case 22: integ122b (r, task, answers, src); break;
        case 23: integ123b (r, task, answers, src); break;
        case 24: integ124b (r, task, answers, src); break;
        case 25: integ125b (r, task, answers, src); break;
        case 26: integ126b (r, task, answers, src); break;
        case 27: integ127b (r, task, answers, src); break;
        case 28: integ128b (r, task, answers, src); break;
        case 29: integ129b (r, task, answers, src); break;
        case 30: integ130b (r, task, answers, src); break;
        case 31: integ131b (r, task, answers, src); break;
        case 32: integ132b (r, task, answers, src); break;
        case 33: integ133b (r, task, answers, src); break;
        case 34: integ134b (r, task, answers, src); break;
        case 35: integ135b (r, task, answers, src); break;
        case 36: integ201b (r, task, answers, src); break;
        case 37: integ202b (r, task, answers, src); break;
        case 38: integ203b (r, task, answers, src); break;
        case 39: integ204b (r, task, answers, src); break;
        case 40: integ205b (r, task, answers, src); break;
        case 41: integ206b (r, task, answers, src); break;
        case 42: integ207b (r, task, answers, src); break;
        case 43: integ208b (r, task, answers, src); break;
        case 44: integ301b (r, task, answers, src); break;
        case 45: integ302b (r, task, answers, src); break;
        case 46: integ303b (r, task, answers, src); break;
        case 47: integ304b (r, task, answers, src); break;
        case 48: integ305b (r, task, answers, src); break;
        case 49: integ306b (r, task, answers, src); break;
        case 50: integ307b (r, task, answers, src); break;
        case 51: integ308b (r, task, answers, src); break;
        case 52: integ309b (r, task, answers, src); break;
        case 53: integ310b (r, task, answers, src); break;
        case 54: integ311b (r, task, answers, src); break;
        case 55: integ312b (r, task, answers, src); break;
        case 56: integ313b (r, task, answers, src); break;
        case 57: integ314b (r, task, answers, src); break;
        case 58: integ315b (r, task, answers, src); break;
        case 59: integ316b (r, task, answers, src); break;
        case 60: integ317b (r, task, answers, src); break;
        case 61: integ318b (r, task, answers, src); break;
        case 62: integ319b (r, task, answers, src); break;
        case 63: integ320b (r, task, answers, src); break;
        case 64: integ321b (r, task, answers, src); break;
        case 65: integ322b (r, task, answers, src); break;

        case 66: integ101a (r, task, answers, src); break;
        case 67: integ102a (r, task, answers, src); break;
        case 68: integ103a (r, task, answers, src); break;
        case 69: integ104a1 (r, task, answers, src); break;
        case 70: integ104a2 (r, task, answers, src); break;
        case 71: integ105a1 (r, task, answers, src); break;
        case 72: integ105a2 (r, task, answers, src); break;
        case 73: integ106a (r, task, answers, src); break;
        case 74: integ107a1 (r, task, answers, src); break;
        case 75: integ107a2 (r, task, answers, src); break;
        case 76: integ108a (r, task, answers, src); break;
        case 77: integ109a (r, task, answers, src); break;
        case 78: integ110a (r, task, answers, src); break;
        case 79: integ111a (r, task, answers, src); break;

        case 80: integ201a (r, task, answers, src); break;
        case 81: integ202a (r, task, answers, src); break;
        case 82: integ203a (r, task, answers, src); break;
        case 83: integ204a (r, task, answers, src); break;
        case 84: integ205a (r, task, answers, src); break;
        case 85: integ206a (r, task, answers, src); break;
        case 86: integ207a (r, task, answers, src); break;
        case 87: integ208a (r, task, answers, src); break;
        case 88: integ209a (r, task, answers, src); break;
        case 89: integ210a (r, task, answers, src); break;
        case 90: integ211a (r, task, answers, src); break;
        case 91: integ212a (r, task, answers, src); break;
        case 92: integ213a (r, task, answers, src); break;
        case 93: integ214a (r, task, answers, src); break;
        case 94: integ215a (r, task, answers, src); break;
        case 95: integ216a (r, task, answers, src); break;
        case 96: integ217a (r, task, answers, src); break;
        case 97: integ218a (r, task, answers, src); break;
		//табличные интегралы 98-109
		case 98: integ219a (r, task, answers, src); break;
		case 99: integ220a (r, task, answers, src); break;
		case 100: integ221a (r, task, answers, src); break;
		case 101: integ222a (r, task, answers, src); break;
		case 102: integ223a (r, task, answers, src); break;
		case 103: integ224a (r, task, answers, src); break;
		case 104: integ225a (r, task, answers, src); break;
		case 105: integ226a (r, task, answers, src); break;
		case 106: integ227a (r, task, answers, src); break;
		case 107: integ228a (r, task, answers, src); break;
		/*case 108: integ229a (r, task, answers, src); break;*/
		case 109: integ230a (r, task, answers, src); break;
		// новые
		case 110:integ301a (r, task, answers, src); break;
		case 111:integ302a (r, task, answers, src); break;
		case 112:integ303a (r, task, answers, src); break;
		case 113:integ304a (r, task, answers, src); break;//
		case 114:integ305a (r, task, answers, src); break;
		case 115:integ306a (r, task, answers, src); break;
		case 116:integ307a (r, task, answers, src); break;
		case 117:integ308a (r, task, answers, src); break;
		case 118:integ309a (r, task, answers, src); break;
		case 119:integ310a (r, task, answers, src); break;
		//case 120:integ311a (r, task, answers, src); break;
		case 121:integ312a (r, task, answers, src); break;
		case 122:integ313a (r, task, answers, src); break;
		case 123:integ314a (r, task, answers, src); break;
		case 124:integ315a (r, task, answers, src); break;
        default: qDebug() << qq->integralIndex();
    }

    QStringList tsk, solution;
    QList<QStringList> answ;

    tsk << stringtolist(task);

    answ << stringtolist(answers[0]);
    answ << stringtolist(answers[1]);
    answ << stringtolist(answers[2]);
    answ << stringtolist(answers[3]);
    int right = shuffleAnswers(answ);

    solution << answ[right];

    result.setTask(tsk);
    result.setAnswers(answ);
    result.setRight(right);
    result.setSolution(solution);
    return result;
}

