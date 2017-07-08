#include "m_expressions.h"
#include <stdlib.h>

void integ001b (const range &r, char *task, char answ[][BUFSZ], char *src)
{
	char buf[10][BUFSZ];
	int a;
	do{
		a=rndr(r);
	}while(!(a!=-1));

	strcpy(task,"");
	catprintf(task, "String(\"Найдите интеграл:\")");
	catprintf(task, "\nInt(%s)*Diff(x)=...", memb(buf[0], 1,1,a,1,"x",false));

	sprintf(src, "int(x^a)*diff(x)");

	sprintf(answ[0], "...=%s+C", memb(buf[0], 1,a+1,a+1,1,"x", false));
	sprintf(answ[1], "...=%s+C", memb(buf[0], a+1,1,a+1,1,"x", false));
	sprintf(answ[2], "...=%s+C", memb(buf[0], a,1,a-1,1,"x", false));
	sprintf(answ[3], "...=%s+C", memb(buf[0], 1,a,a-1,1,"x", false));
}

void integ002b (const range &r, char *task, char answ[][BUFSZ], char *src)
{
	strcpy(task,"");
	catprintf(task, "String(\"Найдите интеграл:\")");
	catprintf(task, "\nInt(x^(-1))*Diff(x)=...");

	sprintf(src, "int(1/x)*diff(x)");

	sprintf(answ[0], "...=ln(|x|)+C");
	sprintf(answ[1], "...=-ln(|x|)+C");
	sprintf(answ[2], "...=x^(-2)/(-2)+C");
	sprintf(answ[3], "...=-2*x^(-2)+C");
}

void integ003b (const range &r, char *task, char answ[][BUFSZ], char *src)
{
	char buf[10][BUFSZ];
	int a;
	do{
		a=rndr(r);
	}while(!(abs(a)!=1));

	strcpy(task,"");
	catprintf(task, "String(\"Найдите интеграл:\")");
	catprintf(task, "\nInt((%d)^x)*Diff(x)=...", a);

	sprintf(src, "int(a^x)*diff(x)");

	sprintf(answ[0], "...=(%d)^x/ln(%d)+C", a,a);
	sprintf(answ[1], "...=ln(%d)/((%d)^x)+C", a,a);
	sprintf(answ[2], "...=(%d)^x*ln(%d)+C", a,a);
	sprintf(answ[3], "...=1/((%d)^x*ln(%d))+C", a,a);
}

void integ004b (const range &r, char *task, char answ[][BUFSZ], char *src)
{
	strcpy(task,"");
	catprintf(task, "String(\"Найдите интеграл:\")");
	catprintf(task, "\nInt(e^x)*Diff(x)=...");

	sprintf(src, "int(e^x)*diff(x)");

	sprintf(answ[0], "...=e^x+C");
	sprintf(answ[1], "...=-e^x+C");
	sprintf(answ[2], "...=e^(x+1)/(x+1)+C");
	sprintf(answ[3], "...=e^x/ln(x)+C");
}

void integ005b (const range &r, char *task, char answ[][BUFSZ], char *src)
{
	strcpy(task,"");
	catprintf(task, "String(\"Найдите интеграл:\")");
	catprintf(task, "\nInt(sin(x))*Diff(x)=...");

	sprintf(src, "int(sin(x))*diff(x)");

	sprintf(answ[0], "...=-cos(x)+C");
	sprintf(answ[1], "...=cos(x)+C");
	sprintf(answ[2], "...=sin(x)+C");
	sprintf(answ[3], "...=-sin(x)+C");
}

void integ006b (const range &r, char *task, char answ[][BUFSZ], char *src)
{
	strcpy(task,"");
	catprintf(task, "String(\"Найдите интеграл:\")");
	catprintf(task, "\nInt(cos(x))*Diff(x)=...");

	sprintf(src, "int(cos(x))*diff(x)");

	sprintf(answ[0], "...=sin(x)+C");
	sprintf(answ[1], "...=cos(x)+C");
	sprintf(answ[2], "...=-cos(x)+C");
	sprintf(answ[3], "...=-sin(x)+C");
}

void integ007b (const range &r, char *task, char answ[][BUFSZ], char *src)
{
	strcpy(task,"");
	catprintf(task, "String(\"Найдите интеграл:\")");
	catprintf(task, "\nInt(1/sin(x)^2)*Diff(x)=...");

	sprintf(src, "int(1/sin(x)^2)*diff(x)");

	sprintf(answ[0], "...=-ctg(x)+C");
	sprintf(answ[1], "...=-tg(x)+C");
	sprintf(answ[2], "...=tg(x)+C");
	sprintf(answ[3], "...=ctg(x)+C");
}

void integ008b (const range &r, char *task, char answ[][BUFSZ], char *src)
{
	strcpy(task,"");
	catprintf(task, "String(\"Найдите интеграл:\")");
	catprintf(task, "\nInt(1/cos(x)^2)*Diff(x)=...");

	sprintf(src, "int(1/cos(x)^2)*diff(x)");

	sprintf(answ[0], "...=tg(x)+C");
	sprintf(answ[1], "...=-tg(x)+C");
	sprintf(answ[2], "...=-ctg(x)+C");
	sprintf(answ[3], "...=ctg(x)+C");
}

void integ009b (const range &r, char *task, char answ[][BUFSZ], char *src)
{
	char buf[10][BUFSZ];
	int a;
	do{
		a=rndr(r);
	}while(!(a>0));

	strcpy(task,"");
	catprintf(task, "String(\"Найдите интеграл:\")");
	catprintf(task, "\nInt(1/sqrt(%d-x^2))*Diff(x)=...", a*a);

	sprintf(src, "int(1/sqrt(a^2-x^2))*diff(x)");

	sprintf(answ[0], "...=arcsin(x/%d)+C", a);
	sprintf(answ[1], "...=(1/%d)*arcsin(1/%d)+C", a,a);
	sprintf(answ[2], "...=-(1/%d)*arcsin(1/%d)+C", a,a);
	sprintf(answ[3], "...=-arcsin(x/%d)+C", a);
}

void integ010b (const range &r, char *task, char answ[][BUFSZ], char *src)
{
	char buf[10][BUFSZ];
	int a;
	do{
		a=rndr(r);
	}while(!(a>0));

	strcpy(task,"");
	catprintf(task, "String(\"Найдите интеграл:\")");
	catprintf(task, "\nInt(1/(%d+x^2))*Diff(x)=...", a*a);

	sprintf(src, "int(1/(a^2+x^2))*diff(x)");

	sprintf(answ[0], "...=(1/%d)*arctg(x/%d)+C", a);
	sprintf(answ[1], "...=arctg(1/%d)+C", a,a);
	sprintf(answ[2], "...=-(1/%d)*arctg(1/%d)+C", a,a);
	sprintf(answ[3], "...=-arctg(x/%d)+C", a);
}

void integ011b (const range &r, char *task, char answ[][BUFSZ], char *src)
{
	char buf[10][BUFSZ];
	int a;
	do{
		a=rndr(r);
	}while(!(a>0));

	strcpy(task,"");
	catprintf(task, "String(\"Найдите интеграл:\")");
	catprintf(task, "\nInt(1/sqrt(%s))*Diff(x)=...", polynomial(buf[0],2, 1,"x^2",a,""));

	sprintf(src, "int(1/(x^2+a))*diff(x)");

	sprintf(answ[0], "...=ln(|x+sqrt(%s)|)+C", polynomial(buf[0],2, 1,"x^2",a,""));
	sprintf(answ[1], "...=ln(|x-sqrt(%s)|)+C", polynomial(buf[0],2, 1,"x^2",a,""));
	sprintf(answ[2], "...=arcsin(x/%d)+C", a);
	sprintf(answ[3], "...=-arcsin(x/%d)+C", a);
}

void integ012b (const range &r, char *task, char answ[][BUFSZ], char *src)
{
	char buf[10][BUFSZ];
	int a;
	do{
		a=rndr(r);
	}while(!(a>0));

	strcpy(task,"");
	catprintf(task, "String(\"Найдите интеграл:\")");
	catprintf(task, "\nInt(1/(%d-x^2))*Diff(x)=...", a*a);

	sprintf(src, "int(1/(a^2-x^2))*diff(x)");

	sprintf(answ[0], "...=(1/%d)*ln(|(%d+x)/(%d-x)|)+C", 2*a,a,a);
	sprintf(answ[1], "...=(1/%d)*ln(|(%d+x)/(%d-x)|)+C", a,a,a);
	sprintf(answ[2], "...=(1/%d)*ln(|(%d-x)/(%d+x)|)+C", a,a,a);
	sprintf(answ[3], "...=(1/%d)*ln(|(%d-x)/(%d+x)|)+C", a,a,a);
}
