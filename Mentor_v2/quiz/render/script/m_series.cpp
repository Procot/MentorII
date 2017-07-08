#include "m_expressions.h"
#include <stdlib.h>
#include <QDebug>
#define pi 3.14



void series101 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
	char buf[10][BUFSZ];

	int a,b,c,p,k,x0;

	do{
		a=rndr(r);
		b=rndr(r);
		c=rndr(r);
		p=rndr(r);
		k=rndr(r);
		x0=rndr(r);
	}while (p<0 || a<=0 || a==1||p<=0||k<0);

	char ab1[BUFSZ];
	char ab2[BUFSZ];

	chprintf(ab1, "%s", polynomial(buf[0], 2, 1,"x", -x0,""));
	chprintf(ab2, "%s", polynomial(buf[0], 2, p,"n", 0,""));
	strcpy(task, "");
	catprintf(task, "String(\"Найти область сходимости степенного ряда:\")");
	catprintf(task, "\nU_n&String(\"(x) = \")&((%s)/((%s)*((%d)^n)))*(%s)^n",ab2, memb(buf[1],1,1,k,1,polynomial(buf[0],2,b,"n",c,""),false),a,ab1);

	if(k==0||k==1)
	{
		sprintf(answ[0], "String( )&String(\"(\")&%d&String(\";\")&%d&String(\")\")",-a+x0,a+x0);
		sprintf(answ[1], "String( )&String(\"(\")&%d&String(\";\")&%d&String(\"]\")",-a+x0,a+x0);
		sprintf(answ[2], "String( )&String(\"[\")&%d&String(\";\")&%d&String(\"]\")",-a+x0,a+x0);
		

	}
	if(k==2)
	{
		sprintf(answ[0], "String( )&String(\"(\")&%d&String(\";\")&%d&String(\"]\")",-a+x0,a+x0);
		sprintf(answ[1], "String( )&String(\"(\")&%d&String(\";\")&%d&String(\")\")",-a+x0,a+x0);
		sprintf(answ[2], "String( )&String(\"[\")&%d&String(\";\")&%d&String(\"]\")",-a+x0,a+x0);
		
	}
	if(k>2)	
	{		
		sprintf(answ[0], "String( )&String(\"[\")&%d&String(\";\")&%d&String(\"]\")",-a+x0,a+x0);
		sprintf(answ[1], "String( )&String(\"(\")&%d&String(\";\")&%d&String(\"]\")",-a+x0,a+x0);
		sprintf(answ[2], "String( )&String(\"(\")&%d&String(\";\")&%d&String(\")\")",-a+x0,a+x0);
		

	}
	sprintf(answ[3], "String( )&String(\"(\")&%d&String(\";\")&%d&String(\")\")",-a,a);
	

	sprintf(src, "%s", "y=sin(a*x+b)");
}
void series102 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
	char buf[10][BUFSZ];

	int a,b,c,k,d;

	do{
		a=rndr(r);
		b=rndr(r);
		c=rndr(r);
		d=rndr(r);
		k=rndr(r);

	}while (b<=0||c<=0 || a<=0 || a==1||k<0);

	char ab1[BUFSZ];
	char ab2[BUFSZ];

	//chprintf(ab1, "%s", polynomial(buf[0], 2, 1,"x", -x0,""));
	chprintf(ab2, "%s", polynomial(buf[0], 2, b,"(x^(2*n))*n", 0,""));
	strcpy(task, "");
	catprintf(task, "String(\"Найти область сходимости степенного ряда:\")");
	catprintf(task, "\nU_n&String(\"(x) = \")&((%s)/((%s)*((%d)^(2*n))))",
		ab2, memb(buf[1],1,1,k,1,polynomial(buf[0],2,c,"n",d,""),false),a);

	if(k==0||k==1||2)
	{
		sprintf(answ[0], "String( )&String(\"(\")&%d&String(\";\")&%d&String(\")\")",-a,a);
		sprintf(answ[1], "String( )&String(\"[\")&%d&String(\";\")&%d&String(\"]\")",-a,a);
	}
	if(k>2)
	{			
		sprintf(answ[0], "String( )&String(\"[\")&%d&String(\";\")&%d&String(\"]\")",-a,a);
		sprintf(answ[1], "String( )&String(\"(\")&%d&String(\";\")&%d&String(\")\")",-a,a);
	}
		
	sprintf(answ[2], "String( )&String(\"[\")&%d&String(\";\")&%d&String(\")\")",-a,a);
	sprintf(answ[3], "String( )&String(\"(\")&%d&String(\";\")&%d&String(\"]\")",-a,a);

	sprintf(src, "%s", "y=sin(a*x+b)");
}

void series103 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
	char buf[10][BUFSZ];

	int a,b,c,k,d,x0,m;

	do{
		a=rndr(r);
		b=rndr(r);
		c=rndr(r);
		k=rndr(r);
		d=rndr(r);
		m=rndr(r);
		x0=rndr(r);
	}while (m<=0 || b<=0 || a<=1||k<0);

	char ab1[BUFSZ];
	char ab2[BUFSZ];
	char ab3[BUFSZ];
	chprintf(ab3, "%s", polynomial(buf[0], 2, m,"n", 0,""));
	chprintf(ab1, "%s", polynomial(buf[0], 2, 1,"x", -x0,""));
	chprintf(ab2, "%s", polynomial(buf[0], 2, 1,"n", d,""));
	strcpy(task, "");
	catprintf(task, "String(\"Найти область сходимости степенного ряда:\")");
	catprintf(task, "\nU_n&String(\"(x) = \")&((((%d)^n)*(%s))/((%s)))*(%s)^(%s)",a,
		ab2, memb(buf[1],1,1,k,1,polynomial(buf[0],2,b,"n",c,""),false),ab1,ab3);
	chprintf(buf[5], "%d",a);	
	chprintf(buf[6],"%s", memb(buf[9],1,1,1,m,buf[5],false));
	if(k==0||k==1)
	{
		sprintf(answ[0], "String( )&String(\"(\")&%d-1/(%s)&String(\";\")&%d+1/(%s)&String(\")\")",x0,buf[6],x0,buf[6] );
		sprintf(answ[1], "String( )&String(\"(\")&%d-1/(%s)&String(\";\")&%d+1/(%s)&String(\"]\")",x0,buf[6],x0,buf[6] );
		sprintf(answ[2], "String( )&String(\"[\")&%d-1/(%s)&String(\";\")&%d+1/(%s)&String(\"]\")",x0,buf[6],x0,buf[6] );
	}
	if(k==2)	
	{	
		sprintf(answ[0], "String( )&String(\"(\")&%d-1/(%s)&String(\";\")&%d+1/(%s)&String(\"]\")",x0,buf[6],x0,buf[6] );
		sprintf(answ[1], "String( )&String(\"(\")&%d-1/(%s)&String(\";\")&%d+1/(%s)&String(\")\")",x0,buf[6],x0,buf[6] );
		sprintf(answ[2], "String( )&String(\"[\")&%d-1/(%s)&String(\";\")&%d+1/(%s)&String(\"]\")",x0,buf[6],x0,buf[6] );
	}
	if(k>2)		
	{
		sprintf(answ[0], "String( )&String(\"[\")&%d-1/(%s)&String(\";\")&%d+1/(%s)&String(\"]\")",x0,buf[6],x0,buf[6] );
		sprintf(answ[1], "String( )&String(\"(\")&%d-1/(%s)&String(\";\")&%d+1/(%s)&String(\")\")",x0,buf[6],x0,buf[6] );
		sprintf(answ[2], "String( )&String(\"(\")&%d-1/(%s)&String(\";\")&%d+1/(%s)&String(\"]\")",x0,buf[6],x0,buf[6] );
	}
	sprintf(answ[3], "String( )&String(\"(\")&-1/(%s)&String(\";\")&+1/(%s)&String(\")\")",buf[6],buf[6] );
	

	sprintf(src, "%s", "y=sin(a*x+b)");
}

void series104 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
	char buf[10][BUFSZ];

	int a,b,c,p,k,x0;

	do{
		a=rndr(r);
		b=rndr(r);
		c=rndr(r);
		p=rndr(r);
		k=rndr(r);
		x0=rndr(r);
	}while (p<0 || a==0 || a==1||p<=0||k<0);

	char ab1[BUFSZ];
	char ab2[BUFSZ];
	char ab3[BUFSZ];

	chprintf(ab1, "(%s)^(n)", polynomial(buf[0], 2, 1,"x", -x0,""));

	chprintf(ab2, "%s", polynomial(buf[0], 2, p,"n", 0,""));

	chprintf(ab3, "%s", memb(buf[0],1,1,k,1,polynomial(buf[4],2,b,"n",c,""),false));
	strcpy(task, "");
	catprintf(task, "String(\"Найти область сходимости функционального ряда:\")");
	catprintf(task, "\nU_n&String(\"(x) = \")&((%s)*(%d)^(n))/(%s*%s)",
		ab2,a, ab3,ab1);

	sprintf(answ[0], "String( )&String(\"(\")&-inf&String(\";\")&%d&String(\"]U[\")&%d&String(\";\")&+INF&String(\")\")",x0-a,x0+a);
	sprintf(answ[1], "String( )&String(\"[\")&%d&String(\";\")&%d&String(\"]\")",x0-a,x0+a);
	sprintf(answ[3], "String( )&String(\"[\")&%d&String(\";\")&%d&String(\")\")",x0-a,x0+a);
	sprintf(answ[2], "String( )&String(\"(\")&-inf&String(\";\")&%d&String(\"]U(\")&%d&String(\";\")&+INF&String(\")\")",x0-a,x0+a);
	//sprintf(answ[4], "String( )&String(\"(\")&-inf&String(\";\")&%d&String(\")U(\")&%d&String(\";\")&+INF&String(\")\")",x0-a,x0+a);

	sprintf(src, "%s", "y=sin(a*x+b)");
}
void series105 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
	char buf[10][BUFSZ];

	int a,b,q,p;

	do{
		a=rndr(r);
		b=rndr(r);
		q=rndr(r);
		p=rndr(r);
	}while (!(((q>=0&&a>q)||(q<=0&&a>0))&&(p!=0)));

	char ab1[BUFSZ];
	char ab2[BUFSZ];
	char ab3[BUFSZ];

	chprintf(ab1, "%s", polynomial(buf[0], 2, 1,"n", b,""));
	chprintf(ab2, "(%s)", polynomial(buf[0], 3, 1,"x^2", -2*p,"x",p*p+q,""));

	strcpy(task, "");
	catprintf(task, "String(\"Найти область сходимости функционального ряда:\")");
	catprintf(task, "\nU_n&String(\"(x) = \")&((%s)/((%d)^n))*(%s)^n",
		ab1,a,ab2);
	chprintf(ab2, "(%d)",a-q); 
	chprintf(ab2, "(%s)",memb(buf[0],1,1,1,2,ab2,false)); 

	sprintf(answ[0], "String( )&String(\"(\")&%d-%s&String(\";\")&%d+%s&String(\")\")",p,ab2,p,ab2);
	sprintf(answ[1], "String( )&String(\"[\")&%d-%s&String(\";\")&%d+%s&String(\"]\")",p,ab2,p,ab2);
	sprintf(answ[2], "String( )&String(\"(\")&-%s&String(\";\")&+%s&String(\")\")",ab2,ab2);
	sprintf(answ[3], "String( )&String(\"[\")&-%s&String(\";\")&+%s&String(\"]\")",ab2,ab2);



	sprintf(src, "%s", "y=sin(a*x+b)");
}
void series106 (const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
	char buf[10][BUFSZ];

	int a,b,c,q,p;

	do{
		b=rndr(r);
		q=rndr(r);
		p=rndr(r);
		c=rndr(r);
	}while (!(1<=c<=5&&q>0&&(p!=0)));
	a=q+c*c;
	char ab1[BUFSZ];
	char ab2[BUFSZ];
	char ab3[BUFSZ];

	chprintf(ab1, "%s", polynomial(buf[0], 2, 1,"n", b,""));
	chprintf(ab2, "(%s)", polynomial(buf[0], 3, 1,"x^2", -2*p,"x",p*p+q,""));

	strcpy(task, "");
	catprintf(task, "String(\"Найти область сходимости функционального ряда:\")");
	catprintf(task, "\nU_n&String(\"(x) = \")&((%d)^n)/((%s)*(%s)^n)",
		a,ab1,ab2);
	chprintf(ab2, "(%d)",a-q); 
	chprintf(ab2, "(%s)",memb(buf[0],1,1,1,2,ab2,false)); 

	sprintf(answ[0], "String( )&String(\"(\")&-inf&String(\";\")&%d-%s&String(\")U(\")&%d+%s&String(\";\")&+inf&String(\")\")",p,ab2,p,ab2);
	sprintf(answ[1], "String( )&String(\"(\")&-inf&String(\";\")&%d-%s&String(\"]U(\")&%d+%s&String(\";\")&+inf&String(\")\")",p,ab2,p,ab2);
	sprintf(answ[2], "String( )&String(\"(\")&%d-%s&String(\";\")&%d+%s&String(\")\")",p,ab2,p,ab2);
	sprintf(answ[3], "String( )&String(\"(\")&-inf&String(\";\")&%d-%s&String(\"]U[\")&%d+%s&String(\";\")&+inf&String(\")\")",p,ab2,p,ab2);



	sprintf(src, "%s", "y=sin(a*x+b)");
}

void series107(const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
	char buf[10][BUFSZ];//зачем 10

	int a,p,k;//выписал все буквы из задания.
	
	do
	{//генерируем  случайные значения
		a=rndr(r);
		p=rndr(r);
		k=rndr(r);
	}while (!( a>=2 && p>=1 ));//пока не удовлетворяют ограничениям

	//промежуточные буферы	|в task	|в answ
	char ab1[BUFSZ];//		|a^2n	|(n+1)^p
	char ab2[BUFSZ];//		|n^p	|n+1+k
	char ab3[BUFSZ];//		|n+k	|n+k

	//memb(buf[0],множитель,делитель,степень,обратная степень,выражение которое нужно возвести(строка),знак)
	//polynomial(buf[0],количество слагаемых,  множитель при слагаемом, слагаемое(строка)....)

	chprintf(ab1, "(%d^(2*n))",a);//a^2n
	chprintf(ab2, "(%s)", memb(buf[0],1,1,p,1,"n",false));//n^p
	chprintf(ab3, "(%s)", polynomial(buf[0], 2, 1,"n", k,""));//n+k

	//задание 
	strcpy(task, "");
	catprintf(task, "string(\"Найти упрощенное выражение для отношения \")&");
	catprintf(task, "(U_n+1)/(U_n)&string(\";\")&");
	catprintf(task, "lim(n->inf,(U_n+1)/(U_n))");
	catprintf(task, "\nstring(\"и по признаку Даламбера исследовать ряд на сходимость:\")\n");
	//сам пример
	catprintf(task,"summa(string(\" \"),n=1,inf)&(%s*%s)/(%s)!",ab1,ab2,ab3);

	chprintf(ab1, "(%s)", memb(buf[0],1,1,p,1,"n+1",false));//(n+1)^p
	chprintf(ab2, "(%s)", polynomial(buf[0], 2, 1,"n", k+1,""));//n+k+1
	chprintf(ab3, "(%s)", memb(buf[0],1,1,p,1,"n",false));//n^p
	
	//ответы
	sprintf(answ[0], "(%d*%s)/(%s*%s)&string(\" ; 0 ; сходится\")",a*a,ab1,ab2,ab3);
	sprintf(answ[1], "(%d*%s)/(%s*%s)&string(\" ; 0 ; сходится\")",a,ab1,ab2,ab3);
	sprintf(answ[2], "(%d*%s)/(%s)&string(\" ; %d ; расходится\")",a,ab1,ab3,a);
	sprintf(answ[3], "(%d)/(%s)&string(\" ; 0 ; сходится\")",a,ab2);


	//зачем это
	sprintf(src, "%s", "y=sin(a*x+b)");
}
void series108(const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
	char buf[10][BUFSZ];//зачем 10

	int a,p,k;//выписал все буквы из задания.
	
	do
	{//генерируем  случайные значения
		a=rndr(r);
		p=rndr(r);
		k=rndr(r);
	}while (!( a>2 && p>1 && k<6));//пока не удовлетворяют ограничениям

	//промежуточные буферы	|в task	|в answ
	char ab1[BUFSZ];//		|a^2n	|(2n+2-k)
	char ab2[BUFSZ];//		|2n-k	|(2n+1-k)
	char ab3[BUFSZ];//		|n^p	|n^p
	char ab4[BUFSZ];//		|не исп	|(n+1)^p

	//memb(buf[0],множитель,делитель,степень,обратная степень,выражение которое нужно возвести(строка),знак)
	//polynomial(buf[0],количество слагаемых,  множитель при слагаемом, слагаемое(строка)....)

	chprintf(ab1, "(%d^(2*n))",a);//a^2n
	chprintf(ab2, "(%s)", polynomial(buf[0], 2, 2,"n", -k,""));//2n-k
	chprintf(ab3, "(%s)", memb(buf[0],1,1,p,1,"n",false));//n^p

	//задание 
	strcpy(task, "");
	catprintf(task, "string(\"Найти упрощенное выражение для отношения \")&");
	catprintf(task, "(U_n+1)/(U_n)&string(\";\")&");
	catprintf(task, "lim(n->inf,(U_n+1)/(U_n))");
	catprintf(task, "\nstring(\"и по признаку Даламбера исследовать ряд на сходимость:\")\n");
	//сам пример
	catprintf(task,"summa(string(\" \"),n=3,inf)&(%s)/(((%s)!)*%s)",ab1,ab2,ab3);

	//упрощения для ответов
	chprintf(ab1, "(%s)", polynomial(buf[0], 2, 2,"n", 2-k,""));//(2n+2-k)
	chprintf(ab2, "(%s)", polynomial(buf[0], 2, 2,"n", 1-k,""));//(2n+1-k)
	chprintf(ab4, "(%s)", memb(buf[0],1,1,p,1,"n+1",false));//(n+1)^p
	
	//ответы
	sprintf(answ[0], "(%d*%s)/(%s*%s*%s)&string(\" ; 0 ; сходится\")",	a*a,ab3,ab1,ab2,ab4);
	sprintf(answ[1], "(%d*%s)/(%s*%s)&string(\" ; 0 ; сходится\")",		a,ab3,ab2,ab4);
	sprintf(answ[2], "(%d*%s)/(%s*%s)&string(\" ; 0 ; сходится\")",		a*a,ab3,ab2,ab4);
	sprintf(answ[3], "(%d*%s)/(%s)&string(\" ; %d ; расходится\")",		a*a,ab3,ab4,a*a);
	


	//зачем это
	sprintf(src, "%s", "y=sin(a*x+b)");
}
void series109(const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
	char buf[10][BUFSZ];//зачем 10

	int a,p;//выписал все буквы из задания.
	
	do
	{//генерируем  случайные значения
		a=rndr(r);
		p=rndr(r);
	}while (!( a!=0 && p>=1));//пока не удовлетворяют ограничениям
	//при p<1 n=1 или n^p выглядит как 1/(n^-p), сократить это нереально
	//ну и 0^... дает единицу, не знаю как быть, можно сократить в принципе если сохранить а в строку,но смысл тогда его вообще держать

	//промежуточные буферы	
	char ab1[BUFSZ];//		
	char ab2[BUFSZ];//		
	char ab3[BUFSZ];//	

	//memb(buf[0],множитель,делитель,степень,обратная степень,выражение которое нужно возвести(строка),знак)
	//polynomial(buf[0],количество слагаемых,  множитель при слагаемом, слагаемое(строка)....)

	chprintf(ab1, "(%s)", memb(buf[0],1,1,p,1,"n",false));//n^p

	//задание 
	strcpy(task, "");
	catprintf(task, "string(\"Найти упрощенное выражение для отношения \")&");
	catprintf(task, "(U_n+1)/(U_n)&string(\";\")&");
	catprintf(task, "lim(n->inf,(U_n+1)/(U_n))");
	catprintf(task, "\nstring(\"и по признаку Даламбера исследовать ряд на сходимость:\")\n");
	//сам пример
	catprintf(task,"summa(string(\" \"),n=1,inf)&((((%d)^n)*(n!))/(((2*n)!)*(%s)))",a,ab1);

	//упрощения для ответов
	chprintf(ab2, "(%s)", memb(buf[0],1,1,p,1,"n+1",false));//(n+1)^p
	chprintf(ab3, "(%s)", memb(buf[0],1,1,p-1,1,"n+1",false));//(n+1)^(p-1)
	
	//ответы
	sprintf(answ[0], "((%d)*(%s))/((2*n+2)*(2*n+1)*(%s))&string(\" 0 ; сходится\")",a,ab1,ab3);//2 - correct
	sprintf(answ[1], "((%d)*(%s))/((2*n+1)*(%s))&string(\" \")&%s&string(\" ; расходится\")",a,ab1,ab2,memb(buf[0],a,2,1,1,"",false));//1
	sprintf(answ[2], "(%s)/((2*n+2)*(2*n+1)*(%s))&string(\" 0 ; сходится\")",ab1,ab2);//3
	sprintf(answ[3], "((%d)*(%s))/((2*n+1)*(%s))&string(\" \")&%s&string(\" ; расходится\")",a,ab1,ab3,memb(buf[0],a,2,1,1,"",false));//4
	


	//зачем это
	sprintf(src, "%s", "y=sin(a*x+b)");
}
void series110(const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
	char buf[10][BUFSZ];//зачем 10

	int a,b;//выписал все буквы из задания.
	
	do
	{//генерируем  случайные значения
		a=rndr(r);
		b=rndr(r);
	}while (!( a>0 && b>1));//потому что потом в ответах мы не сгенерируем a/b и b/a
	//и скорее всего для этих же отношений и соблюдения условий необходимо либо брать их по модулю, либо генерировать их строго >0 потому что там потом -1 это сходится -2 это сходится и тд
	//так что вот тут я хз

	//промежуточные буферы	
	char ab1[BUFSZ];//слишком много	
	char ab2[BUFSZ];//	
	char ab3[BUFSZ];//	
	char ab4[BUFSZ];//	
	char ab5[BUFSZ];//	
	char ab6[BUFSZ];//	

	//memb(buf[0],множитель,делитель,степень,обратная степень,выражение которое нужно возвести(строка),знак)
	//polynomial(buf[0],количество слагаемых,  множитель при слагаемом, слагаемое(строка)....)

	//задание 
	strcpy(task, "");
	catprintf(task, "string(\"Найти упрощенное выражение для отношения \")&");
	catprintf(task, "(U_n+1)/(U_n)&string(\";\")&");
	catprintf(task, "lim(n->inf,(U_n+1)/(U_n))");
	catprintf(task, "\nstring(\"и по признаку Даламбера исследовать ряд на сходимость:\")\n");
	//сам пример

	if(a!=1)catprintf(task,"summa(string(\" \"),n=1,inf)&((string(\"(\")&%d&string(\")(\")&%d&string(\")(\")&%d&string(\")..(\")&%d*n-1&string(\")\"))/(((%d)^n)*((n+1)!)))",b-1,2*b-1,3*b-1,b,a);
	else catprintf(task,"summa(string(\" \"),n=1,inf)&((string(\"(\")&%d&string(\")(\")&%d&string(\")(\")&%d&string(\")..(\")&%d*n-1&string(\")\"))/(((n+1)!)))",b-1,2*b-1,3*b-1,b);

	//упрощения для ответов
	chprintf(ab1, "&string(\"; \")&(%s)&string(\" %s\")",memb(buf[0],b,a,1,1,"",false),b>a ? ("расходится"):(b==a ? ("нельзя определить"):("сходится")));//b/a и хвост овтета
	chprintf(ab2, "&string(\"; \")&(%s)&string(\" %s\")",memb(buf[0],a,b,1,1,"",false),a>b ? ("расходится"):(b==a ? ("нельзя определить"):("сходится")));//a/b и хвост овтета

	chprintf(ab3,"(%s)",memb(buf[0],b,1,1,1,"n",false));//bn
	chprintf(ab4,"(%s)",polynomial(buf[0],2,b,"n",b-1,""));//bn+b-1
	chprintf(ab5,"(%s)",polynomial(buf[0],1,a,"(n+2)"));//a(n+2)
	chprintf(ab6,"(%s)",polynomial(buf[0],1,a,"(n+1)"));//a(n+1)

	
	//ответы
	sprintf(answ[0],"((%s)/(%s))%s",ab4,ab5,ab1);
	sprintf(answ[1],"((%s)/(%s))%s",ab3,ab5,ab1);
	sprintf(answ[2],"((%s)/((%s)*(n+2)))&string(\" 0 ; сходится\")",ab4,ab6);
	sprintf(answ[3],"((%s)/(%s))%s",ab6,ab4,ab2);
	


	//зачем это
	sprintf(src, "%s", "y=sin(a*x+b)");
}
void series111(const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
	char buf[10][BUFSZ];//зачем 10

	int a,b,c,d,k;//выписал все буквы из задания.
	
	do
	{//генерируем  случайные значения
		a=rndr(r);
		b=rndr(r);
		c=rndr(r);
		d=rndr(r);
		k=rndr(r);
	}while (!( a>0 && b>0 && c>0 && d>0 && k>0 && k<6 && b!=d));//b!=d чтобы не выходило an+b/cn+d = 1

	//промежуточные буферы	
	char ab1[BUFSZ];
	char ab2[BUFSZ];
	char ab3[BUFSZ];

	//задание 
	strcpy(task, "");
	strcpy(buf[0], "");
	strcpy(buf[1], "");
	catprintf(task, "string(\"Найти \")&lim(n->inf,root(n,U*n))");
	catprintf(task, "&string(\" и, используя радикальный признак Коши,\")\n");
	catprintf(task, "string(\"исследовать ряд на сходимость:\")\n");
	//сам пример
	catprintf(task,"summa(string(\" \"),n=1,inf)&(string(\" \")&((%s+%d)/(%s+%d)))^(%s)",memb(buf[0],a,1,1,1,"n",false),b,memb(buf[1],c,1,1,1,"n",false),d,memb(buf[2],k,1,1,1,"n",false));


	chprintf(ab1,"(%s)&string(\" ; ряд сходится\")",a==c ? ("1"):(memb(buf[0],1,1,k,1,memb(buf[1],a,c,1,1,"",false),false)));
	chprintf(ab2,"(%s)&string(\" ; ряд расходится\")",a==c ? ("1"):(memb(buf[0],1,1,k,1,memb(buf[1],a,c,1,1,"",false),false)));

	chprintf(ab3,"(1)&string(\" ; нельзя сделать вывод\")");

	sprintf(answ[0],"%s",a<c ? ab1 : (a>c ? ab2 : ab3));
	sprintf(answ[1],"%s",a<c ? ab2 : (a>c ? ab3 : ab1));
	sprintf(answ[2],"%s",a<c ? ab3 : (a>c ? ab1 : ab2));
	sprintf(answ[3],"(inf)&string(\" ; ряд расходится\")");
	
	//зачем это
	sprintf(src, "%s", "y=sin(a*x+b)");
}
void series112(const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
	char buf[10][BUFSZ];

	int b,c;
	
	do
	{
		b=rndr(r);
		c=rndr(r);
	}while (!( c!=0 && c>-3 && c<3 && b>0 && b<5));


	char ab1[BUFSZ];
	char ab2[BUFSZ];
	char ab3[BUFSZ];

	strcpy(task, "");
	strcpy(buf[0], "");
	strcpy(buf[1], "");
	catprintf(task, "string(\"Найти выражение\")&root(n,U*n)");
	catprintf(task, "&string(\" и, используя радикальный признак Коши,\")\n");
	catprintf(task, "string(\"исследовать ряд на сходимость:\")\n");
	catprintf(task,"summa(string(\" \"),n=3,inf)&((string(\" \")&(%s)/(n))^(n^2))*(1/((%d)^(%s)))",polynomial(buf[0],2,1,"n",c,""),b,memb(buf[1],c,1,1,1,"n",false));

	if(pow(b,c)!=1)
		chprintf(ab3,"*(%s)",c>0 ? (memb(buf[0],1,pow(b,c),1,1,"",false)):(memb(buf[0],pow(b,-c),1,1,1,"",false)));
	else 
		strcpy(ab3,"");
	chprintf(ab1,"(((string(\" \")&(%s)/n)^n)%s)&string(\" ; ряд сходится\")",polynomial(buf[0],2,1,"n",c,""),ab3);
	chprintf(ab2,"(((string(\" \")&(%s)/n)^n)%s)&string(\" ; ряд расходится\")",polynomial(buf[0],2,1,"n",c,""),ab3);

	sprintf(answ[0],"%s",(c>0 && (b==1 || b==2)) ? ab2 : ab1 );
	sprintf(answ[1],"%s",(c>0 && (b==1 || b==2)) ? ab1 : ab2 );
	sprintf(answ[2],"((%s)/(%s))&string(\" ; ряд сходится\")",polynomial(buf[0],2,1,"n",c,""),memb(buf[1],b,1,1,1,"n",false));
	sprintf(answ[3],"(inf)&string(\" ; ряд расходится\")");


	sprintf(src, "%s", "y=sin(a*x+b)");
}
void series113(const range& r, char task[BUFSZ], char answ[5][BUFSZ], char src[BUFSZ])
{
	char buf[10][BUFSZ];//зачем 10

	int a,b,c,d;
	
	do
	{
		a=rndr(r);
		b=rndr(r);
		c=rndr(r);
		d=rndr(r);
	}while(!(b!=d && c>0 && a>0));//чтобы не было an+b/cn+d = 1


	char ab1[BUFSZ];

	//задание 
	strcpy(task, "");
	strcpy(buf[0], "");
	strcpy(buf[1], "");
	catprintf(task, "string(\"Найти \")&lim(n->inf,root(n,U*n))");
	catprintf(task, "&string(\" и, используя радикальный признак Коши,\")\n");
	catprintf(task, "string(\"исследовать ряд на сходимость:\")\n");
	//сам пример
	catprintf(task,"summa(string(\" \"),n=1,inf)&(string(\" \")&((%s)/(%s)))^(n^2)",polynomial(buf[0],2,a,"n",b,""),polynomial(buf[1],2,c,"n",d,""));

	chprintf(ab1,"(%s)",memb(buf[0],a*a,c*c,1,1,"",false));
	//chprintf(ab2,"((%s)*(%s))&string(\" ; ряд расходится\")",);
	if(a < c || (a==c && b < d))
	{
		sprintf(answ[0],"(0)&string(\" ; ряд сходится\")");
		sprintf(answ[1],"(inf)&string(\" ; ряд расходится\")");
		sprintf(answ[2],"(%s)&string(\" ; ряд сходится\")",ab1);
		sprintf(answ[3],"(1)&string(\" ; нельзя сделать вывод о сходимости\")");
	}
	else if(a > c || (a==c && b > d))
	{
		sprintf(answ[0],"(inf)&string(\" ; ряд расходится\")");
		sprintf(answ[1],"(0)&string(\" ; ряд сходится\")");		
		sprintf(answ[2],"(%s)&string(\" ; ряд сходится\")",ab1);
		sprintf(answ[3],"(1)&string(\" ; нельзя сделать вывод о сходимости\")");
	}
	else
	{
		sprintf(answ[0],"(1)&string(\" ; нельзя сделать вывод о сходимости\")");
		sprintf(answ[1],"(0)&string(\" ; ряд сходится\")");		
		sprintf(answ[2],"(%s)&string(\" ; ряд сходится\")",ab1);
		sprintf(answ[3],"(inf)&string(\" ; ряд расходится\")");
	}


	//зачем это
	sprintf(src, "%s", "y=sin(a*x+b)");
}


