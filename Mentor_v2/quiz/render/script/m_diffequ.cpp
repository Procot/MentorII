#include "m_expressions.h"
#include <stdlib.h>
#include <QDebug>
#define pi 3.14159

void diffequ101 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
	char buf[10][BUFSZ];

	int k1,k2,k3;

	do{
		k1=rndr(r);
		k3=rndr(r);
	}while (!((k1>=-4&&k1<=4)&&(k3>=1&&k3<=5)));

	k2=k1+k3;
	char ab1[BUFSZ];
	char ab2[BUFSZ];
	char ab33[BUFSZ];
	char ab22[BUFSZ];
	char ab333[BUFSZ];
	char ab222[BUFSZ];
	char ab3[BUFSZ];
	char a11[BUFSZ];char a12[BUFSZ];char a21[BUFSZ];char a22[BUFSZ];
	

	chprintf(ab1, "%s", polynomial(buf[0], 4,1,"y&String(\"''\")&",-(k1+k2),"(y&String(\"'\"))", k1*k2,"y", 0,""));
	strcpy(task, "");
	catprintf(task, "String(\"Найти общее решение уравнения:\")");
	catprintf(task, "\n%s=0",ab1);

	

	chprintf(a11, "%s",polynomial(buf[0], 2,k1,"x",0,""));
	chprintf(a12, "%s",polynomial(buf[0], 2,k2,"x",0,""));
	chprintf(a21, "%s",polynomial(buf[0], 2,-k1,"x",0,""));
	chprintf(a22, "%s",polynomial(buf[0], 2,-k2,"x",0,""));

	if(k1==0)
	{
		chprintf(ab2, "C_1");
		chprintf(ab22, "C_1");
		chprintf(ab222, "");

	}
	else
	{
		chprintf(ab2, "C_1*e^(%s)",a11);
		chprintf(ab22, "C_1*e^(%s)",a21);
		chprintf(ab222, "C_1*sin(%s)+",a11);

	}
	if(k2==0)
	{
		chprintf(ab3, "C_2");
		chprintf(ab33, "C_2");
		chprintf(ab333, "C_2");
	}
	else
	{
		chprintf(ab3, "C_2*e^(%s)",a12);
		chprintf(ab33, "C_2*e^(%s)",a22);
		chprintf(ab333, "C_2*cos(%s)",a12);
	}

	sprintf(answ[0], "String( )&y=%s+%s",ab2,ab3);
	sprintf(answ[1], "String( )&y=%s+%s",ab22,ab33);
	sprintf(answ[2], "String( )&y=%s+%s*x",ab2,ab3);
	sprintf(answ[3], "String( )&y=%s%s",ab222,ab333);
	

	sprintf(src, "%s", "y=sin(a*x+b)");
}


/*
	Так как во всех DIFFEQU 1 раздела одинаковые ответы - вынесем их в отдельную говнюшку,
	я хз куда её пихать, если бы я был умнее, я бы точно разобрался а так сорян будет лежать
	отягощать код прям тут

	варианты ответов
											Без смены знака   Смена первого знака  Смена второго знака Смена обоих знаков
	ce^(kx)									0					6					12					18
	ce^(kx) с x во втором слагаемом			1 					7					13					19
	c sin k1x + c cos k2x					2					8					14					20
	c e^k1 sin k2x + c e^k1 cos k2x			3					9					15					21
	c e^k2 sin k1x + c e^k2 cos k1x			4					10					16					22
	c sh k1x + c ch k2x						5					11					17					23
*/

#define DIFFEQU_ANSWERS_COUNT 6

inline void ParseSign(int& answer_type,int& k1,int& k2)
{//изменяет знаки аргументов k1 k2 в соответствии с таблицей
	int i = 0;
	while(answer_type>DIFFEQU_ANSWERS_COUNT-1)
	{
		k1=-k1;
		if((++i)==2) k2=-k2;
		answer_type -= DIFFEQU_ANSWERS_COUNT;
	}
}

inline void GenerateDiffequAnswer(char answer[BUFSZ],int answer_type,int k1,int k2)
{//генерирует один ответ из таблицы
	char buffer[4][BUFSZ];
	ParseSign(answer_type,k1,k2);
	switch(answer_type)
	{		
		case 0://ce^(kx)
			if(k1==0)	sprintf(answer,"y=(C_1)"); else sprintf(answer,"y=(C_1)*e^(%s)",polynomial(buffer[0],1,k1,"x"));
			if(k2==0)	catprintf(answer,"+(C_2)");	else catprintf(answer,"+(C_2)*e^(%s)",polynomial(buffer[0],1,k2,"x"));	break;
		case 1://ce^(kx) с x во втором слагаемом
			if(k1==0) sprintf(answer,"y=(C_1)");else sprintf(answer,"y=(C_1)*e^(%s)",polynomial(buffer[0],1,k1,"x"));
			if(k2==0) catprintf(answer,"+(C_2)*x");	else	catprintf(answer,"+(C_2)*x*e^(%s)",polynomial(buffer[0],1,k2,"x"));	break;
		case 2://c sin k1x + c cos k2x
			sprintf(answer,"y=(C_1)*sin(%s)+(C_2)*cos(%s)",polynomial(buffer[0],1,k1,"x"),polynomial(buffer[1],1,k2,"x"));break;
		case 3://c e^k1 sin k2x + c e^k1 cos k2x
			if(k1==0) sprintf(buffer[0],"");else sprintf(buffer[0],"e^(%s)",polynomial(buffer[1],1,k1,"x"));
			polynomial(buffer[1],1,k2,"x");
			sprintf(answer,"y=(C_1)*(%s)*sin(%s)+(C_2)*(%s)*cos(%s)",buffer[0],buffer[1],buffer[0],buffer[1]);break;
		case 4://c e^k2 sin k1x + c e^k2 cos k1x
			if(k2==0) sprintf(buffer[0],""); else sprintf(buffer[0],"e^(%s)",polynomial(buffer[1],1,k2,"x"));
			polynomial(buffer[1],1,k1,"x");
			sprintf(answer,"y=(C_1)*(%s)*sin(%s)+(C_2)*(%s)*cos(%s)",buffer[0],buffer[1],buffer[0],buffer[1]);break;
		case 5://c sh k1x + c ch k2x
			sprintf(answer,"y=(C_1)*sh(%s)+(C_2)*ch(%s)",polynomial(buffer[0],1,k1,"x"),polynomial(buffer[1],1,k2,"x"));break;

		

		default:
			sprintf(answer,"string(Упс С: ошибочка вышла)");
	}
}

inline void GenDiffequAnswers(char answers[5][BUFSZ],int k1,int k2,...)
{//генерирует четыре ответа, идущих там где троеточие
	int *answer_type = &k2;	
	for(int i=0;i<4;++i)
		GenerateDiffequAnswer(answers[i],*(++answer_type),k1,k2);	
}

void diffequ102(const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
	int k = rndr(range(-5,5));
	sprintf(task,"string(Найти общее решение)\n%s=0",polynomial(src,3,1,"(y&string(''))",-2*k,"(y&string('))",k*k,"y"));
	GenDiffequAnswers(answ,k,k,1,19,2,12);
}

void diffequ103(const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
	int b = rndr(range(1,5));
	sprintf(task,"string(Найти общее решение)\n%s=0",polynomial(src,2,1,"(y&string(''))",b*b,"y"));
	GenDiffequAnswers(answ,b,b,2,0,4,6);
}

void diffequ104(const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
	int a = rndr(range(-5,5)); if(a==0) ++a;
	int b = rndr(range(1,5));  if(b==a) if(b==5) --b; else ++b;	
	sprintf(task,"string(Найти общее решение)\n%s=0",polynomial(src,3,1,"(y&string(''))",2*a,"(y&string('))"),a*a+b*b,"y");
	GenDiffequAnswers(answ,a,b,3,4,9,16);
}

/* здесь уже пошли другие ответы 
	не знаю, можно ли было так делать, возможно я нарушил какое-то древнее пророчество или традицию, но я убрал ненужные аргументы
	они в скриптрендерхелпере вообще не используются
	r и src

*/

/*
 О да как я люблю плодить бесполезные функции это просто божественно и это очередной плод моего безумного говнокодерского
 рассудка.
 Эта функция делает абсолютно то же самое, что и memb, только степень в которую можно возводить, может быть представлена строкой
 и числом одновременно (d и d_char НЕ соответственно)

*/

char* SimplyMemb(char* buffer,int a,int b,int c,int d,char* var,char* d_char,bool sign = true)
{
	if(d==0 || b==0 || a==0) sprintf(buffer,"0");
	else
	{
		char ab[50],cd[50];
		if(c==0)memb(buffer,a,b,1,1,"",sign);
		else if(c/d == 1)
		{
			sprintf(ab,"%s^(%s)",var,d_char);
			memb(buffer,a,b,1,1,ab,sign);
		}
		else if(c/d == -1)
		{
			sprintf(ab,"%s^(1/(%s))",var,d_char);
			memb(buffer,a,b,1,1,ab,sign);
		}
		else
		{
			if(a/b!=1 && a/b!=-1)
			{
				memb(ab,a,b,1,1,"",sign);
				catprintf(ab,"*");
			}
			else strcpy(ab,a/b==-1 ? "-":"");
			memb(cd,c,d,1,1,"",sign);
			sprintf(buffer,"%s(%s^(%s*(%s)))",ab,var,cd,d_char);
		}
	}
	return buffer;	
}

void diffequ105(char task[BUFSZ], char answ[5][BUFSZ])
{
	char buffer[3][BUFSZ];
	int k1 = rndr(range(-4,4)),k3 = rndr(range(1,5)), k2  = k1 + k3,x0 = rndr(range(-4,4)),y0 = rndr(range(-4,4)),y0d = rndr(range(-4,4));
	sprintf(task,"string(Решить задачу Коши:)\n%s=0\ny&string(')&string(\"(\")&%d&string(\")\")=%d&string(,  )&y&string(\"(\")&%d&string(\")\")=%d",polynomial(answ[0],3,1,"y&string('')",k1+k2,"y&string(')",k1*k2,"y"),x0,y0d,x0,y0);
	polynomial(buffer[2],2,1,"x",-x0,"");
	sprintf(answ[0],"%s%s",SimplyMemb(buffer[0],-y0d+k2*y0,k3,k1,1,"e",buffer[2],false),		SimplyMemb(buffer[1],-y0d+k1*y0,k3,k2,1,"e",buffer[2],true));
	sprintf(answ[1],"%s%s",SimplyMemb(buffer[0],-y0d+k2*y0+k3,k3,k1,1,"e",buffer[2],false),	SimplyMemb(buffer[1],-y0d+k1*y0,k3,k2,1,"e",buffer[2],true));
	sprintf(answ[2],"%s%s",SimplyMemb(buffer[0],-y0d+k2*y0,k3,k1,1,"e",buffer[2],false),		SimplyMemb(buffer[1],-y0d+k1*y0-k3,k3,k2,1,"e",buffer[2],true));
	sprintf(answ[3],"%s%s",SimplyMemb(buffer[0],-y0d+k2*y0+k3,k3,k1,1,"e",buffer[2],false),	SimplyMemb(buffer[1],-y0d+k1*y0-k3,k3,k2,1,"e",buffer[2],true));
}

void diffequ106(char task[BUFSZ], char answ[5][BUFSZ])
{
	char buffer[5][BUFSZ];
	int k1 = rndr(range(-5,5)),x0 = rndr(range(-4,4)),y0 = rndr(range(-4,4)),y0d = rndr(range(-4,4));
	sprintf(task,"string(Решить задачу Коши:)\n%s=0\ny&string(')&string(\"(\")&%d&string(\")\")=%d&string(,  )&y&string(\"(\")&%d&string(\")\")=%d",polynomial(answ[0],3,1,"y&string('')",2*k1,"y&string(')",k1*k1,"y"),x0,y0d,x0,y0);
	polynomial(buffer[2],2,1,"x",-x0,"");
	sprintf(buffer[3],"%s+1",buffer[2]);
	sprintf(buffer[4],"%s-1",buffer[2]);
	sprintf(answ[0],"%s*(%s)",SimplyMemb(buffer[0],1,1,k1,1,"e",buffer[2],false),polynomial(buffer[1],2,y0+k1*x0*y0-y0d,"",y0d-k1*y0,"x"));
	sprintf(answ[1],"%s*%d",SimplyMemb(buffer[0],1,1,k1,1,"e",buffer[4],false),y0+y0*k1*x0+y0d+1);
	sprintf(answ[2],"%s*%d*x",SimplyMemb(buffer[0],1,1,k1,1,"e",buffer[3],false),y0d-k1*y0+2);
	sprintf(answ[3],"%s*(%s)",SimplyMemb(buffer[0],1,1,k1,1,"e",buffer[2],false),polynomial(buffer[1],2,y0+k1*x0*y0+y0d+1,"",y0d-k1*y0+2,"x"));

	
}


