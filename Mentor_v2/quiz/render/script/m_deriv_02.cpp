#include "m_expressions.h"

void deriv701a (const range &r, char *task, char answ[][BUFSZ], char *src)
{
    char buf[20][BUFSZ];
    int a, b, m, n, c, d;
    do {
        a = rndr(r);
        b = rndr(r);
        c = rndr(r);
        d = rndr(r);
        m = rndr(range(2, 4));
        n = rndr(range(2, 4));
    } while (!(c>0 && d>0 && m*n>2 && a!=b && a!=0 && b!=0));

    strcpy(task, "");
    catprintf(task, "String(\"Найдите производную указанной функции:\")");
    catprintf(task, "\ny=(%s)/(%s)",
        memb(buf[0], 1,1,m,1, polynomial(buf[1],2, a,"x", b,""), false),
        memb(buf[2], 1,1,1,n, polynomial(buf[3],2, c,"x", d,""), false)
    );
    sprintf(src, "y=((a*x+b)^m)/root(n,c*x+d)");

    sprintf(answ[0], "y(x)`=((%s)*(%s))/(%s)",
        memb(buf[0], 1,1,m-1,1, polynomial(buf[1],2, a,"x",b,""), false),
        polynomial(buf[2],2, a*c*(m*n-1),"x", a*m*n*d-c*b,""),
        memb(buf[3], n,1,n+1,n, polynomial(buf[4],2, c,"x",d,""), false)
    );
    sprintf(answ[1], "y(x)`=((%s)*(%s))/(%s)",
        memb(buf[0], m,1,m-1,1, polynomial(buf[1],2, a,"x",b,""), false),
        polynomial(buf[2],2, a*c,"x", -c*b,""),
        memb(buf[3], n,1,2,n, polynomial(buf[4],2, c,"x",d,""), false)
    );
    sprintf(answ[2], "y(x)`=((%s)*(%s))/(%s)",
        memb(buf[0], m,1,m-1,1, polynomial(buf[1],2, a,"x",b,""), false),
        polynomial(buf[2],2, m*a-c,"x", d*b,""),
        memb(buf[3], n,1,n+1,n, polynomial(buf[4],2, c,"x",d,""), false)
    );
    sprintf(answ[3], "y(x)`=((%s)*(%s))/(%s)",
        memb(buf[0], 1,1,m-1,1, polynomial(buf[1],2, a,"x",b,""), false),
        polynomial(buf[2],2, a*c,"x", a*d-c*b,""),
        memb(buf[3], n,1,2,n, polynomial(buf[4],2, c,"x",d,""), false)
    );
}



void deriv702a (const range &r, char *task, char answ[][BUFSZ], char *src)
{
    char buf[20][BUFSZ];
    int a, b, c, k;
    do {
        a = rndr(r);
        b = rndr(r);
        c = rndr(r);
        k = rndr(r);
    } while (!(a!=0 && b!=0 && k!=0 && k!=2 && k!=1 && k!=-2));

    strcpy(task, "");
    catprintf(task, "String(\"Найдите производную указанной функции:\")");
    catprintf(task, "\ny=(sin(%s)/(%s))*tg(%s)",
        polynomial(buf[0],2, a,"x^2",b,""),
        polynomial(buf[1],2, 1,"cos(x)^2", c,""),
        memb(buf[2], 1,k,1,1,"pi", false)
    );
    sprintf(src, "y=(sin(a*x^2+b)/(cos(x)^2+c))*tg(pi/k)");

    sprintf(answ[0], "y(x)`=tg(%s)*(((%s)*cos(%s)*(%s)+!(sin(2*x))*sin(%s))/((%s)^2))",
        memb(buf[0], 1,k,1,1,"pi", false),
        polynomial(buf[1],1, 2*a,"x"),
        polynomial(buf[2],2, a,"x^2",b,""),
        polynomial(buf[3],2, 1,"cos(x)^2", c,""),
        polynomial(buf[4],2, a,"x^2",b,""),
        polynomial(buf[5],2, 1,"cos(x)^2", c,"")
    );
    sprintf(answ[1], "y(x)`=tg(%s)*((%s)*cos(%s)-!(sin(2*x))*sin(%s))/((%s)^2))",
        memb(buf[0], 1,k,1,1,"pi", false),
        polynomial(buf[1],2, 1,"cos(x)^2", c,""),
        polynomial(buf[2],2, a,"x^2",b,""),
        polynomial(buf[3],2, a,"x^2",b,""),
        polynomial(buf[4],2, 1,"cos(x)^2", c,"")
    );
    sprintf(answ[2], "y(x)`=(pi/(%s))*(%s)/((%s)^2))",
        polynomial(buf[0],1, k*k,chprintf(buf[1],"cos(%s)^2", memb(buf[2], 1,k,1,1,"pi", false))),
        polynomial(buf[3],2,
            1,chprintf(buf[4], "sin(2*x)*sin(%s)", polynomial(buf[5],2, a,"x^2",b,"")),
            -2*a, chprintf(buf[6], "x*(%s)*cos(%s)",
                    polynomial(buf[7],2, 1,"cos(x)^2", c,""),
                    polynomial(buf[8],2, a,"x^2", b,"")
                  )
        ),
        polynomial(buf[9],2, 1,"cos(x)^2", c,"")
    );
    sprintf(answ[3], "y(x)`=tg(%s)*(((%s)*cos(%s)*(%s)-2*cos(x)*sin(%s))/((%s)^2))",
        memb(buf[0], 1,k,1,1,"pi", false),
        polynomial(buf[1],1, 2*a,"x"),
        polynomial(buf[2],2, a,"x^2",b,""),
        polynomial(buf[3],2, 1,"cos(x)^2", c,""),
        polynomial(buf[4],2, a,"x^2",b,""),
        polynomial(buf[5],2, 1,"cos(x)^2", c,"")
    );
}




void deriv703a (const range &r, char *task, char answ[][BUFSZ], char *src)
{
    char buf[20][BUFSZ];
    int a, b, c;
    do {
        a = rndr(r);
        b = rndr(r);
        c = rndr(r);
    } while (!(a!=0 && c!=0 && a>0));

    strcpy(task, "");
    catprintf(task, "String(\"Найдите производную указанной функции:\")");
    catprintf(task, "\ny=((%s)/sqrt(%s))*arctg(%d)",
        polynomial(buf[0],2,
            1,chprintf(buf[1], "arcsin(%s)", memb(buf[2], 1,a,1,1,"x", false)),
            c,""
        ),
        polynomial(buf[3],2, a*a,"", -1,"x^2"),
        b
    );
    sprintf(src, "y(x)=((arcsin(x/a)+c)/sqrt(a^2-x^2))*arctg(b)");

    sprintf(answ[0], "y(x)`=((%s)/sqrt((%s)^3))*arctg(%d)",
        polynomial(buf[0],2,
            1,chprintf(buf[1],"sqrt(%s)", polynomial(buf[2],2, a*a,"", -1,"x^2")),
            1,chprintf(buf[3],"x*(%s)", polynomial(buf[4],2, 1,chprintf(buf[5],"!(arcsin(%s))",memb(buf[6],1,a,1,1,"x")), c,""))
        ),
        polynomial(buf[7],2, a*a,"", -1,"x^2"),
        b
    );
    sprintf(answ[1], "y(x)`=((%s)/sqrt((%s)^3))*arctg(%d)",
        polynomial(buf[0],2,
            a,chprintf(buf[1],"sqrt(%s)", polynomial(buf[2],2, a*a,"", -1,"x^2")),
            -1,chprintf(buf[3],"x*(%s)", polynomial(buf[4],2, 1,chprintf(buf[5],"!(arcsin(%s))",memb(buf[6],1,a,1,1,"x")), c,""))
        ),
        polynomial(buf[7],2, a*a,"", -1,"x^2"),
        b
    );
    sprintf(answ[2], "y(x)`=(%s)/(%s)",
        polynomial(buf[0],2,
            a,chprintf(buf[1],"sqrt(%s)", polynomial(buf[2],2, a*a,"", -1,"x^2")),
            -1,chprintf(buf[3],"x*(%s)", polynomial(buf[4],2, 1,chprintf(buf[5],"!(arcsin(%s))",memb(buf[6],1,a,1,1,"x")), c,""))
        ),
        polynomial(buf[7],2, a*a*(1+b*b),"", -(1+b*b),"x^2")
    );
    sprintf(answ[3], "y(x)`=(%s)/(%s)",
        polynomial(buf[0],2,
            a,chprintf(buf[1],"sqrt(%s)", polynomial(buf[2],2, a*a,"", -1,"x^2")),
            2,chprintf(buf[3],"x*(%s)", polynomial(buf[4],2, 1,chprintf(buf[5],"!(arcsin(%s))",memb(buf[6],1,a,1,1,"x")), c,""))
        ),
        polynomial(buf[7],2, a*a*(1+b*b),"", -(1+b*b),"x^2")
    );
}




void deriv704a (const range &r, char *task, char answ[][BUFSZ], char *src)
{
    char buf[20][BUFSZ];
    int a, n;
    do {
        a = rndr(r);
        n = rndr(r);
    } while (!(a!=0 && n>1));

    strcpy(task, "");
    catprintf(task, "String(\"Найдите производную указанной функции:\")");
    catprintf(task, "\ny=(%s)/sqrt(%s)",
        memb(buf[0], 1,1,n,1, chprintf(buf[1],"arccos(%s)", memb(buf[2], 1,a,1,1, "x", false)), false),
        polynomial(buf[3],2, a*a,"", -1,"x^2")
    );
    sprintf(src, "y(x)=arccos(x/a)^n/sqrt(a^2-x^2)");

    sprintf(answ[0], "y(x)`=((%s)*(%s))/sqrt((%s)^3)",
        memb(buf[0], 1,1,n-1,1, chprintf(buf[1],"arccos(%s)", memb(buf[2], 1,a,1,1, "x", false)), false),
        polynomial(buf[3],2,
            1,chprintf(buf[4], "x*arccos(%s)", memb(buf[5], 1,a,1,1,"x", false)),
            -n, chprintf(buf[6], "sqrt(%s)", polynomial(buf[7],2,a*a,"",-1,"x^2"))
        ),
        polynomial(buf[7],2, a*a,"", -1,"x^2")
    );
    sprintf(answ[1], "y(x)`=(%s)/(%s)",
        polynomial(buf[0],2,
            2*a, chprintf(buf[1], "x*(%s)", memb(buf[2], 1,1,n,1, chprintf(buf[3],"arccos(%s)", memb(buf[4],1,a,1,1,"x", false)), false)),
            -n,chprintf(buf[5], "sqrt(%s)*(%s)",
                polynomial(buf[6],2, a*a,"", -1,"x^2"),
                memb(buf[7], 1,1,n-1,1, chprintf(buf[8],"arccos(%s)", memb(buf[9],1,a,1,1,"x", false)), false)
            )
        ),
        chprintf(buf[10], "(%s)", polynomial(buf[5],2, a*a,"", -1,"x^2"))
    );
    sprintf(answ[2], "y(x)`=((%s)*(%s))/(%s)",
        memb(buf[0], 1,1,n-1,1, chprintf(buf[1], "arccos(%s)", memb(buf[2], 1,a,1,1,"x", false)), false),
        polynomial(buf[3],2,
             n,chprintf(buf[4],"sqrt(%s)", polynomial(buf[5],2, a*a,"", -1,"x^2")),
            -1,chprintf(buf[6],"x*arccos(%s)", memb(buf[7], 1,a,1,1,"x", false))
        ),
        memb(buf[8], a,1,1,1, chprintf(buf[9],"sqrt((%s)^3)", polynomial(buf[10],2,a*a,"",-1,"x^2")), false)
    );
    sprintf(answ[3], "y(x)`=((%s)*(%s))/(%s)",
        memb(buf[0], 1,1,n-1,1, chprintf(buf[1], "arccos(%s)", memb(buf[2], 1,a,1,1,"x", false)), false),
        polynomial(buf[3],2,
            -n*a, chprintf(buf[9], "!(%s)", polynomial(buf[5],2, a*a,"", -1,"x^2")),
            1,chprintf(buf[6],"x*arccos(%s)", memb(buf[7], 1,a,1,1,"x", false))
        ),
        polynomial(buf[10],2,a*a,"",-1,"x^2")
    );
}




void deriv705a (const range &r, char *task, char answ[][BUFSZ], char *src)
{
    char buf[20][BUFSZ];
    int a,bc,bd,c;
    do {
        a = rndr(r);
        bc = rndr(r);
        bd = rndr(r);
        c = rndr(r);
    } while (!(a!=0 && bc<bd && bc>0 && bd>0 && (bc*bc)%(bd*bd)!=0));

    strcpy(task, "");
    catprintf(task, "String(\"Найдите производную указанной функции:\")");
    catprintf(task, "\ny(x)=((%s)/(%s)^2)*arcsin(%s)",
        polynomial(buf[0],2,
            1, chprintf(buf[1],"arctg(%s)", memb(buf[2], 1,a,1,1,"x",false)),
            c, ""
        ),
        polynomial(buf[3],2, a*a,"",1,"x^2"),
        fraction(buf[4], bc,1,bd)
    );
    sprintf(src, "y(x)=((arctg(x/a)+c)/((a^2+x^2)^2))*arcsin(b)");

    sprintf(answ[0], "y(x)`=((%s)/((%s)^3))*arcsin(%s)",
        polynomial(buf[0],2,
            a,"",
            -4,polynomial(buf[1],2,
                1,chprintf(buf[2],"x*!(arctg(%s))", memb(buf[3],1,a,1,1,"x",false)),
                -c,"x"
               )
        ),
        polynomial(buf[4],2, a*a,"", 1,"x^2"),
        fraction(buf[5], bc,1,bd)
    );
    sprintf(answ[1], "y(x)`=((%s)/((%s)^4))*arcsin(%s)",
        polynomial(buf[0],2,
            a,"",
            -2,polynomial(buf[1],2, 1,chprintf(buf[2],"x*arctg(%s)", memb(buf[3],1,a,1,1,"x",false)), -c,"x")
        ),
        polynomial(buf[4],2, a*a,"", 1,"x^2"),
        fraction(buf[5], bc,1,bd)
    );
    sprintf(answ[2], "y(x)`=((%s)/((%s)^3))*arcsin(%s)",
        polynomial(buf[0],2,
            a*a,"",
            -4,polynomial(buf[1],2, 1,chprintf(buf[2],"x^2*arctg(%s)", memb(buf[3],1,a,1,1,"x",false)), -c,"x^2")
        ),
        polynomial(buf[4],2, a*a,"", 1,"x^2"),
        fraction(buf[5], bc,1,bd)
    );
    sprintf(answ[3], "y(x)`=((%s)/(sqrt(1-%s)*(%s)^4))",
        polynomial(buf[0],2,
            a,"",
            -2,polynomial(buf[1],2, 1,chprintf(buf[2],"x*arctg(%s)", memb(buf[3],1,a,1,1,"x",false)), -c,"x")
        ),
        fraction(buf[5], bc*bc,1,bd*bd),
        polynomial(buf[4],2, a*a,"", 1,"x^2")
    );
}




void deriv706a (const range &r, char *task, char answ[][BUFSZ], char *src)
{
    char buf[20][BUFSZ];
    int a, n;
    do {
        a = rndr(r);
        n = rndr(r);
    } while (!(a!=0 && n>0));

    strcpy(task, "");
    catprintf(task, "String(\"Найдите производную указанной функции:\")");
    catprintf(task, "\ny(x)=arctg(%s)/(%s)",
        memb(buf[0], 1,a,1,1,"x", false),
        memb(buf[1], 1,1,n,1, polynomial(buf[2],2, a*a,"",1,"x^2"), false)
    );
    sprintf(src, "y(x)=arctg(x/a)/(a^2+x^2)^n");

    char xarctg[BUFSZ];
    sprintf(xarctg, "x*arctg(%s)", memb(buf[0], 1,a,1,1, "x", false));
    sprintf(answ[0], "y(x)`=(%s)/(%s)",
        polynomial(buf[0],2, a,"", -2*n,xarctg),
        memb(buf[1], 1,1,n+1,1, polynomial(buf[3],2, a*a,"", 1,"x^2"), false)
    );
    sprintf(answ[1], "y(x)`=(%s)/(%s)",
        polynomial(buf[0],2, a*a,"", -4*n,xarctg),
        memb(buf[1], 1,1,n+1,1, chprintf(buf[5], "(%s)", polynomial(buf[3],2, a*a,"", 1,"x^2")), false)
    );
    sprintf(answ[2], "y(x)`=(%s)/(%s)",
        polynomial(buf[0],2, a,chprintf(buf[1], "(%s)", polynomial(buf[9],2, a*a,"", 1,"x^2"), false), -2*n,xarctg),
        memb(buf[2], 1,1,n,1, chprintf(buf[5], "(%s)", polynomial(buf[3],2, a*a,"", 1,"x^2")), false)
    );
    sprintf(answ[3], "y(x)`=(%s)/(%s)",
        polynomial(buf[0],2, a*a,"", -2*n,xarctg),
        memb(buf[1], 1,1,n,1, chprintf(buf[5], "(%s)", polynomial(buf[2],2, a*a,"", 1,"x^2")), false)
    );
}



void deriv707a (const range &r, char *task, char answ[][BUFSZ], char *src)
{
    char buf[20][BUFSZ];
    int a, b, c;
    do {
        a = rndr(r);
        b = rndr(r);
        c = rndr(r);
    } while (!(a!=0 && b>1));

    char arctgxac[BUFSZ];
    polynomial(arctgxac,2,
        1,chprintf(buf[0],"arctg(%s)", memb(buf[1], 1,a,1,1, "x", false)),
        c,""
    );

    char xarctgxac[BUFSZ];
    sprintf(xarctgxac, "x*(%s)", arctgxac);

    char a2x2[BUFSZ];
    polynomial(a2x2,2, a*a,"",1,"x^2");

    strcpy(task, "");
    catprintf(task, "String(\"Найдите производную указанной функции:\")");
    catprintf(task, "\ny(x)=((%s)/sqrt(%s))*ln(%d)", arctgxac, a2x2, b);
    sprintf(src, "y(x)=((arctg(x/a)+c)/sqrt(a*x^2+b))*ln(b)");

    sprintf(answ[0], "y(x)`=((%s)/sqrt((%s)^3))*ln(%d)",
        polynomial(buf[0],2, a,"", -1,xarctgxac),
        a2x2,
        b
    );
    sprintf(answ[1], "y(x)`=((%s)/sqrt((%s)^3))*ln(%d)",
        polynomial(buf[0],2, a,"", -2,xarctgxac),
        a2x2,
        b
    );
    sprintf(answ[2], "y(x)`=((%s)/(%s))*ln(%d)",
        polynomial(buf[0],2, a,"", -1,xarctgxac),
        a2x2,
        b
    );
    sprintf(answ[3], "y(x)`=((%s)/(%s))",
        polynomial(buf[0],2, a,"", -1,xarctgxac),
        polynomial(buf[1],1, b,a2x2)
    );
}


void deriv708a (const range &r, char *task, char answ[][BUFSZ], char *src)
{
    char buf[20][BUFSZ];
    int a, b, p, c;
    do {
        a = rndr(r);
        b = rndr(r);
        p = rndr(r);
        c = rndr(r);
    } while (!(a>0 && b>0));

    char ax2b[BUFSZ];
    polynomial(ax2b,2, a,"x^2", b,"");
    char lnax2b[BUFSZ];
    sprintf(lnax2b, "ln(%s)", ax2b);

    strcpy(task, "");
    catprintf(task, "String(\"Найдите производную указанной функции:\")");
    catprintf(task, "\ny(x)=((%s)/sqrt(%s))*cos(%d)",
        polynomial(buf[0],2, 1,lnax2b, c,""),
        ax2b,
        p
    );
    sprintf(src, "y(x)=((ln(a*x^2+b)+c)/sqrt(a*x^2+b))*cos(p)");

    sprintf(answ[0], "y(x)`=((%s)/sqrt((%s)^3))*cos(%d)",
        polynomial(buf[0],1, a,chprintf(buf[1],"x*(%s)", polynomial(buf[2],2, 2-c,"", -1,lnax2b))),
        ax2b,
        p
    );
    sprintf(answ[1], "y(x)`=((%s)/sqrt((%s)^3))*cos(%d)",
        polynomial(buf[0],1, a,chprintf(buf[1],"x^2*(%s)", polynomial(buf[2],2, 1-c,"", -1,lnax2b))),
        ax2b,
        p
    );
    sprintf(answ[2], "y(x)`=((%s)/sqrt((%s)^3))*sin(%d)",
        polynomial(buf[0],1, a,chprintf(buf[1],"x*(%s)", polynomial(buf[2],2, c-2,"", 1,lnax2b))),
        ax2b,
        p
    );
    sprintf(answ[3], "y(x)`=((%s)/(%s))*sin(%d)",
        polynomial(buf[0],1, a,chprintf(buf[1],"x^2*(%s)", polynomial(buf[2],2, 1,lnax2b, -2+c,""))),
        ax2b,
        p
    );
}




void deriv409a (const range &r, char *task, char answ[][BUFSZ], char *src)
{
    char buf[20][BUFSZ];
    int a, b, c;
    do {
        a = rndr(r);
        b = rndr(r);
        c = rndr(r);
    } while (!(a>1 && b!=0 && c>1));

    char bx[BUFSZ];
    polynomial(bx,1, b,"x");

    strcpy(task, "");
    catprintf(task, "String(\"Найдите производную указанной функции:\")");
    catprintf(task, "\ny(x)=(%d)^tg(%s)+1/ln(%d)", a,bx,c);
    sprintf(src, "y(x)=a^tg(b*x)+1/ln(c)");

    sprintf(answ[0], "y(x)`=(%d)^tg(%s)*.(%d/cos(%s)^2)*.ln(%d)", a,bx,b,bx,a);
    sprintf(answ[1], "y(x)`=(%d)^tg(%s)*.(%d/sin(%s)^2)*.ln(%d)", a,bx,-b,bx,a);
    sprintf(answ[2], "y(x)`=(%d)^tg(%s)*.(%d/cos(%s)^2)-1/(%s)", a,bx,b,bx,polynomial(buf[0],1,c,chprintf(buf[1],"ln(%d)^2",c)));
    sprintf(answ[3], "y(x)`=tg(%s)*.(%d)^(tg(%s)-1)*.(1/cos(%s)^2)+1/ln(%d)", bx, a, bx, bx, c);
}

void deriv410a (const range &r, char *task, char answ[][BUFSZ], char *src)
{
    char buf[20][BUFSZ];
    int a, b, c;
    do {
        a = rndr(r);
        b = rndr(r);
        c = rndr(r);
    } while (!(a>1 && b!=0 && c>1));

    char bx[BUFSZ];
    polynomial(bx,1, b,"x");

    strcpy(task, "");
    catprintf(task, "String(\"Найдите производную указанной функции:\")");
    catprintf(task, "\ny(x)=(%d)^ctg(%s)+1/sin(%d)", a,bx,c);
    sprintf(src, "y(x)=a^ctg(b*x)+1/sin(c)");

    sprintf(answ[0], "y(x)`=(%d)^ctg(%s)*.!(ln(%d))*.(%d/sin(%s)^2)", a,bx,a,-b,bx);
    sprintf(answ[1], "y(x)`=(%d)^ctg(%s)*.!(ln(%d))*.(%d/cos(%s)^2)+1/sin(%d)", a,bx,a,b,bx,c);
    sprintf(answ[2], "y(x)`=(%d)^ctg(%s)*.!(ln(%d))*.(%d/sin(%s)^2)-(cos(%d)/sin(%d)^2)", a,bx,a,-b,bx,c,c);
    sprintf(answ[3], "y(x)`=ctg(%s)*(%d)^(ctg(%s)-1)*.(%d/sin(%s)^2)", bx,a,bx,b,bx);
}

void deriv411a (const range &r, char *task, char answ[][BUFSZ], char *src)
{
    char buf[20][BUFSZ];
    int a, b, c;
    do {
        a = rndr(r);
        b = rndr(r);
        c = rndr(r);
    } while (!(a>1 && b!=0));

    char bx[BUFSZ];
    polynomial(bx,1, b,"x");

    strcpy(task, "");
    catprintf(task, "String(\"Найдите производную указанной функции:\")");
    catprintf(task, "\ny(x)=(%d)^arcsin(%s)+sin(%d)^3", a,bx,c);
    sprintf(src, "y(x)=a^arcsin(b*x)+sin(c)^3");

    sprintf(answ[0], "y(x)`=(%d)^arcsin(%s)*.!(ln(%d))*.(%d/sqrt(%s))", a,bx,a,b,polynomial(buf[0],2,1,"",-b*b,"x^2"));
    sprintf(answ[1], "y(x)`=(%d)^arcsin(%s)*.!(ln(%d))*.(%d/(%s))+sin(%d)^3", a,bx,a,b,polynomial(buf[0],2,1,"",b*b,"x^2"),c);
    sprintf(answ[2], "y(x)`=(%d)^arcsin(%s)*.!(ln(%d))*.(%d/sqrt(%s))+3*sin(%d)^2*cos(%d)", a,bx,a,b,polynomial(buf[0],2,1,"",b*b,"x^2"),c,c);
    sprintf(answ[3], "y(x)`=arcsin(%s)*(%d)^(arcsin(%s)-1)", bx,a,bx);
}

void deriv412a (const range &r, char *task, char answ[][BUFSZ], char *src)
{
    char buf[20][BUFSZ];
    int a, b, c;
    do {
        a = rndr(r);
        b = rndr(r);
        c = rndr(r);
    } while (!(a>1 && b!=0));

    char bx[BUFSZ];
    polynomial(bx,1, b,"x");

    strcpy(task, "");
    catprintf(task, "String(\"Найдите производную указанной функции:\")");
    catprintf(task, "\ny(x)=(%d)^arctg(%s)+tg(%d)^2", a,bx,c);
    sprintf(src, "y(x)=a^arctg(b*x)+tg(c)^2");

    sprintf(answ[0], "y(x)`=(%d)^arctg(%s)*.!(ln(%d))*.(%d/(%s))", a,bx,a,b,polynomial(buf[0],2,1,"",b*b,"x^2"));
    sprintf(answ[1], "y(x)`=(%d)^arctg(%s)*.!(ln(%d))+tg(%d)^2", a,bx,a,c);
    sprintf(answ[2], "y(x)`=(%d)^(%d/(%s))*.!(ln(%d))+(2*tg(%d))/(cos(%d)^2)", a,b,polynomial(buf[0],2,1,"",b*b,"x^2"),a,c,c);
    sprintf(answ[3], "y(x)`=arctg(%s)*(%d)^(arctg(%s)-1)*.(%d/(%s))", bx,a,bx,b,polynomial(buf[0],2,1,"",b*b,"x^2"));
}

void deriv413a (const range &r, char *task, char answ[][BUFSZ], char *src)
{
    char buf[20][BUFSZ];
    int a, b, c;
    do {
        a = rndr(r);
        b = rndr(r);
        c = rndr(r);
    } while (!(a>1 && b!=0));

    strcpy(task, "");
    catprintf(task, "String(\"Найдите производную указанной функции:\")");
    catprintf(task, "\ny(x)=sin(log(%d,%s))+cos(%d)", a,polynomial(buf[0],1,b,"x"),c);
    chprintf(src, "y=sin(log(a,b*x))+cos(c)");

    sprintf(answ[0], "y(x)`=cos(log(%d,%s))/(x*ln(%d))",a,polynomial(buf[0],1,b,"x"),a);
    sprintf(answ[1], "y(x)`=(cos(log(%d,%s))/((%s)*ln(%d)))+sin(%d)",a,polynomial(buf[1],1,b,"x"),polynomial(buf[0],1,b,"x"),a,c);
    sprintf(answ[2], "y(x)`=%s", polynomial(buf[0],1,b,chprintf(buf[1],"cos(1/((%s)*ln(%d)))", polynomial(buf[2],1,b,"x"),a)));
    sprintf(answ[3], "y(x)`=(cos(log(%d,%s))/(x*ln(%d)))-sin(%d)", a,polynomial(buf[0],1,b,"x"),a,c);
}

void deriv414a (const range &r, char *task, char answ[][BUFSZ], char *src)
{
    char buf[20][BUFSZ];
    int a, b, c;
    do {
        a = rndr(r);
        b = rndr(r);
        c = rndr(r);
    } while (!(a>1 && b!=0));

    strcpy(task, "");
    catprintf(task, "String(\"Найдите производную указанной функции:\")");
    catprintf(task, "\ny(x)=cos((%d)^(%s))^2+tg(%d)", a,polynomial(buf[0],1,b,"x"),c);
    chprintf(src, "y=cos(a^(b*x))^2+tg(c)");

    char blna[BUFSZ]; polynomial(blna,1, b,chprintf(buf[0],"ln(%d)",a));
    char abx[BUFSZ]; sprintf(abx,"(%d)^(%s)", a, polynomial(buf[0],1,b,"x"));

    sprintf(answ[0], "y(x)`=2*cos(%s)*(-sin(%s))*(%s)*(%s)",abx,abx,abx,blna);
    sprintf(answ[1], "y(x)`=2*(cos(%s))*.(%s)+tg(%d)",abx,blna,c);
    sprintf(answ[2], "y(x)`=(sin(%s)^2)*.(%s)+1/cos(%d)^2",abx,blna,c);
    sprintf(answ[3], "y(x)`=2*(cos(%s))*.(sin(%s)^2)*.(%s)",abx,abx,blna);
}

void deriv415a (const range &r, char *task, char answ[][BUFSZ], char *src)
{
    char buf[20][BUFSZ];
    int a, b, c;
    do {
        b = rndr(r);
        c = rndr(r);
    } while (!(b>1 && c>0));

    strcpy(task, "");
    catprintf(task, "String(\"Найдите производную указанной функции:\")");
    catprintf(task, "\ny(x)=arcsin(sqrt(%d/x))+arctg(%d)", b,c);
    chprintf(src, "y=arcsin(sqrt(a/x))+arctg(b)");

    sprintf(answ[0], "y(x)`=-(%s/(%s))",
        fraction(buf[0],1,b,1),
        memb(buf[4], 2*(c*c+1),1,1,1,chprintf(buf[1],"x*sqrt(%s)",polynomial(buf[2],2,1,"x",-b,"")), false)
    );
    sprintf(answ[1], "y(x)`=(%s)/(2*sqrt(%s))",polynomial(buf[0],1,b,"x"),polynomial(buf[1],2,1,"x",-b,""));
    sprintf(answ[2], "y(x)`=(%d)/(2*x^2*sqrt(1-(%d)/x))+arctg(%d)",-b,b,c);
    sprintf(answ[3], "y(x)`=-(%s/(2*x*sqrt(%s)))+(%s)",fraction(buf[0],1,b,1),polynomial(buf[1],2,1,"x",-b,""), fraction(buf[2],1,1,1+c*c));
}

