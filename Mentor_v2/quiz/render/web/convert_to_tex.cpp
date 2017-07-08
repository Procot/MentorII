
#include "convert_to_tex.h"
 #include <QVector>
QString currrent;
struct lex_st
{
	QString token;
	QString type;
};
QVector <lex_st> lex_vec;
QString  cnvt_tex(const QString &TM )
{
	QString n;
	
	if (TM.contains("String"))
	{
	  for (int i=8;i<TM.count()-2;i++)
	  {
		 n.push_back(TM[i]);
	  }
	}else{lexer(TM);}
	
	return n;
}
void lexer(const QString &TM)
{
	QString operations=",=*-+/^()";
	
	
	lex_st tmp;
	for(int i=0;i<TM.count();i++)
	{
		if(operations.contains(TM[i]))
		{
				tmp.token=TM[i];
				tmp.type="operation";
				lex_vec<<tmp;
		} 
		else if(TM[i].isNumber())
		{
				tmp.token=TM[i];
				tmp.type="number";
				lex_vec<<tmp;
		}
		else if(TM[i].isLetter())
		{
				tmp.token=TM[i];
				tmp.type="letter";
				lex_vec<<tmp;
		}

	}
}
