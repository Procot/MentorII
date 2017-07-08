#include "m_integ_a03.h"

void integ301a (const range &r, char *task, char answ[][BUFSZ], char *src)
{
    char buf[10][BUFSZ];
    int a, b, p;
    do {
        a = rndr(r);
        b = rndr(r);
        p = rndr(r);
    } while (!(a!=0 && p!=0 && a!=1 && p!=1 && b!=0 && a!=b));

    strcpy(task, "");
    catprintf(task, "String(\"Найдите интеграл:\")");
    catprintf(task, "\nInt((%s)*e^(%s))*diff(x)",
        polynomial(buf[0],2, a,"x",b,""),
        polynomial(buf[1],1, p,"x")
    );

    chprintf(answ[0], "...=(%s)*e^(%s)+C",
        poly2ns(buf[0],2, a,p,1,1,"x", b*p-a,p*p,1,1,""),
        polynomial(buf[1],1, p,"x")
    );
    chprintf(answ[1], "...=(%s)*e^(%s)+C",
        poly2ns(buf[0],2, a,1,1,1,"x", b*p+a,p,1,1,""),
        polynomial(buf[1],1, p,"x")
    );
    chprintf(answ[2], "...=(%s)*e^(%s)+C",
        poly2ns(buf[0],2, a,p,1,1,"x", b+a,p,1,1,""),
        polynomial(buf[1],1, p,"x")
    );
    chprintf(answ[3], "...=(%s)*e^(%s)+C",
        poly2ns(buf[0],2, a,p*p,1,1,"x", b-a*p,p*p,1,1,""),
        polynomial(buf[1],1, p,"x")
    );

    chprintf(src, "Int((a*x+b)*e^(p*x))*diff(x)");
}

void integ302a (const range &r, char *task, char answ[][BUFSZ], char *src)
{
    char buf[10][BUFSZ];
    int a, b, p;
    do {
        a = rndr(r);
        b = rndr(r);
        p = rndr(r);
    } while (!(a!=0 && a!=1 && b!=0 && p!=0 && p!=1 && a!=b));

    strcpy(task, "");
    catprintf(task, "String(\"Найдите интеграл:\")");
    catprintf(task, "\nInt((%s)*sin(%s))*diff(x)",
        polynomial(buf[0],2, a,"x",b,""),
        polynomial(buf[1],1, p,"x")
    );

    chprintf(answ[0], "...=%s+C",
        poly2ns(buf[0],3,
            -a,p,1,1, chprintf(buf[1], "x*cos(%s)", polynomial(buf[2],1,p,"x")),
            -b,p,1,1, chprintf(buf[3], "cos(%s)", polynomial(buf[4],1,p,"x")),
             a,p*p,1,1, chprintf(buf[5], "sin(%s)", polynomial(buf[6],1,p,"x"))
        )
    );
    chprintf(answ[1], "...=%s+C",
        poly2ns(buf[0],3,
             a,p,1,1, chprintf(buf[1], "x*cos(%s)", polynomial(buf[2],1,p,"x")),
             b,p,1,1, chprintf(buf[3], "cos(%s)", polynomial(buf[4],1,p,"x")),
            -a,p*p,1,1, chprintf(buf[5], "sin(%s)", polynomial(buf[6],1,p,"x"))
        )
    );
    chprintf(answ[2], "...=%s+C",
        poly2ns(buf[0],3,
            -a,p,1,1, chprintf(buf[1], "x*sin(%s)", polynomial(buf[2],1,p,"x")),
            -b,p,1,1, chprintf(buf[3], "sin(%s)", polynomial(buf[4],1,p,"x")),
             a,p*p,1,1, chprintf(buf[5], "cos(%s)", polynomial(buf[6],1,p,"x"))
        )
    );
    chprintf(answ[3], "...=%s+C",
        poly2ns(buf[0],3,
             a,p*p,1,1, chprintf(buf[1], "x*cos(%s)", polynomial(buf[2],1,p,"x")),
             b,p*p,1,1, chprintf(buf[3], "cos(%s)", polynomial(buf[4],1,p,"x")),
            -a,p,1,1, chprintf(buf[5], "sin(%s)", polynomial(buf[6],1,p,"x"))
        )
    );

    chprintf(src, "Int((a*x+b)*sin(p*x))*diff(x)");
}

void integ303a (const range &r, char *task, char answ[][BUFSZ], char *src)
{
    char buf[10][BUFSZ];
    int a, b, p;
    do {
        a = rndr(r);
        b = rndr(r);
        p = rndr(r);
    } while (!(a!=0 && a!=1 && b!=0 && p!=0 && p!=1 && a!=b));

    strcpy(task, "");
    catprintf(task, "String(\"Найдите интеграл:\")");
    catprintf(task, "\nInt((%s)*cos(%s))*diff(x)",
        polynomial(buf[0],2, a,"x",b,""),
        polynomial(buf[1],1, p,"x")
    );

    chprintf(answ[0], "...=%s+C",
        poly2ns(buf[0],3,
            a,p,1,1, chprintf(buf[1], "x*sin(%s)", polynomial(buf[2],1,p,"x")),
            b,p,1,1, chprintf(buf[3], "sin(%s)", polynomial(buf[4],1,p,"x")),
            a,p*p,1,1, chprintf(buf[5], "cos(%s)", polynomial(buf[6],1,p,"x"))
        )
    );
    chprintf(answ[1], "...=%s+C",
        poly2ns(buf[0],3,
            -a,p,1,1, chprintf(buf[1], "x*sin(%s)", polynomial(buf[2],1,p,"x")),
            -b,p,1,1, chprintf(buf[3], "sin(%s)", polynomial(buf[4],1,p,"x")),
            -a,p,1,1, chprintf(buf[5], "cos(%s)", polynomial(buf[6],1,p,"x"))
        )
    );
    chprintf(answ[2], "...=%s+C",
        poly2ns(buf[0],3,
            a,p,1,1, chprintf(buf[1], "x*cos(%s)", polynomial(buf[2],1,p,"x")),
            b,p,1,1, chprintf(buf[3], "cos(%s)", polynomial(buf[4],1,p,"x")),
            -a*a,p*p,1,1, chprintf(buf[5], "sin(%s)", polynomial(buf[6],1,p,"x"))
        )
    );
    chprintf(answ[3], "...=%s+C",
        poly2ns(buf[0],3,
            a,1,1,1, chprintf(buf[1], "x^2*sin(%s)", polynomial(buf[2],1,p,"x")),
            b,1,1,1, chprintf(buf[3], "x*sin(%s)", polynomial(buf[4],1,p,"x")),
            a,p,1,1, chprintf(buf[5], "cos(%s)", polynomial(buf[6],1,p,"x"))
        )
    );

    chprintf(src, "Int((a*x+b)*cos(p*x))*diff(x)");
}

void integ304a (const range &r, char *task, char answ[][BUFSZ], char *src)
{
    char buf[10][BUFSZ];
    int a, b, p;
    do {
        a = rndr(r);
        b = rndr(r);
        p = rndr(r);
    } while (!(a!=0 && a!=1 && b!=0 && p!=0 && p!=1 && a!=b));

    strcpy(task, "");
    catprintf(task, "String(\"Найдите интеграл:\")");
    catprintf(task, "\nInt((%s)*ln(%s))*diff(x)",
        polynomial(buf[0],2, a,"x",b,""),
        polynomial(buf[1],1, p,"x")
    );

    chprintf(answ[0], "...=%s+C",
        poly2ns(buf[0],4,
            a,2,1,1, chprintf(buf[1], "x^2*ln(%s)", polynomial(buf[2],1,p,"x")),
            b,1,1,1, chprintf(buf[3], "x*ln(%s)", polynomial(buf[4],1,p,"x")),
            -a,4,1,1, "x^2",
            -b,1,1,1, "x"
        )
    );
    chprintf(answ[1], "...=%s+C",
        poly2ns(buf[0],4,
            a*a,2,1,1, chprintf(buf[1], "x^2*ln(%s)", polynomial(buf[2],1,p,"x")),
            b,1,1,1, chprintf(buf[3], "x*ln(%s)", polynomial(buf[4],1,p,"x")),
            -a,2*p,1,1, "x^2",
            -b,p,1,1, "x"
        )
    );
    chprintf(answ[2], "...=%s+C",
        poly2ns(buf[0],4,
            a,2*p,1,1, chprintf(buf[1], "x^2*ln(%s)", polynomial(buf[2],1,p,"x")),
            b,p,1,1, chprintf(buf[3], "x*ln(%s)", polynomial(buf[4],1,p,"x")),
            -a,1,1,1, "x",
            -b,1,1,1, ""
        )
    );
    chprintf(answ[3], "...=%s+C",
        poly2ns(buf[0],4,
            a,p,1,1, chprintf(buf[1], "x*ln(%s)", polynomial(buf[2],1,p,"x")),
            b,p,1,1, chprintf(buf[3], "ln(%s)", polynomial(buf[4],1,p,"x")),
            -a,2,1,1, "x^2",
            -b,1,1,1, "x"
        )
    );

    chprintf(src, "Int((a*x+b)*ln(p*x))*diff(x)");
}

void integ305a (const range &r, char *task, char answ[][BUFSZ], char *src)
{
    char buf[10][BUFSZ];
    int a, b, p;
    do {
        a = rndr(r);
        b = rndr(r);
        p = rndr(r);
    } while (!(a!=0 && a!=1 && p!=0 && p!=1 && a!=b));

    strcpy(task, "");
    catprintf(task, "String(\"Найдите интеграл:\")");
    catprintf(task, "\nInt((%s)*sin(%s))*diff(x)",
        polynomial(buf[0],2, a,"x^2",b,""),
        polynomial(buf[1],1, p,"x")
    );

    chprintf(answ[0], "...=%s+C",
        poly2ns(buf[0],3,
            -a,p,1,1, chprintf(buf[1], "x^2*cos(%s)", polynomial(buf[2],1,p,"x")),
            -b*p*p+2*a,p*p*p,1,1, chprintf(buf[3], "cos(%s)", polynomial(buf[4],1,p,"x")),
            2*a,p*p,1,1, chprintf(buf[5], "x*sin(%s)", polynomial(buf[6],1,p,"x"))
        )
    );
    chprintf(answ[1], "...=%s+C",
        poly2ns(buf[0],3,
            a,3,1,1, chprintf(buf[1], "x^3*sin(%s)", polynomial(buf[2],1,p,"x")),
            b,1,1,1, chprintf(buf[3], "x*sin(%s)", polynomial(buf[4],1,p,"x")),
            -2*a,p,1,1, chprintf(buf[5], "x*cos(%s)", polynomial(buf[6],1,p,"x"))
        )
    );
    chprintf(answ[2], "...=%s+C",
        poly2ns(buf[0],4,
            a,p,1,1, chprintf(buf[1], "x^2*sin(%s)", polynomial(buf[2],1,p,"x")),
            b,p,1,1, chprintf(buf[3], "sin(%s)", polynomial(buf[4],1,p,"x")),
            2*a,p*p,1,1, chprintf(buf[5], "cos(%s)", polynomial(buf[6],1,p,"x")),
            -2*a,p,1,1, chprintf(buf[7], "x*cos(%s)", polynomial(buf[8],1,p,"x"))
        )
    );
    chprintf(answ[3], "...=%s+C",
        poly2ns(buf[0],4,
            -a,p,1,1, chprintf(buf[1], "x^2*cos(%s)", polynomial(buf[2],1,p,"x")),
            -b,p,1,1, chprintf(buf[3], "cos(%s)", polynomial(buf[4],1,p,"x")),
            2*a,p*p,1,1, chprintf(buf[5], "sin(%s)", polynomial(buf[6],1,p,"x")),
            -2*a,p,1,1, chprintf(buf[7], "x*cos(%s)", polynomial(buf[8],1,p,"x"))
        )
    );

    chprintf(src, "Int((a*x^2+b)*sin(p*x))*diff(x)");
}

void integ306a (const range &r, char *task, char answ[][BUFSZ], char *src)
{
    char buf[10][BUFSZ];
    int a, b, p;
    do {
        a = rndr(r);
        b = rndr(r);
        p = rndr(r);
    } while (!(a!=0 && a!=1 && p!=0 && p!=1 && a!=b));

    strcpy(task, "");
    catprintf(task, "String(\"Найдите интеграл:\")");
    catprintf(task, "\nInt((%s)*cos(%s))*diff(x)",
        polynomial(buf[0],2, a,"x^2",b,""),
        polynomial(buf[1],1, p,"x")
    );

    chprintf(answ[0], "...=%s+C",
        poly2ns(buf[0],3,
            a,p,1,1, chprintf(buf[1],"x^2*sin(%s)", polynomial(buf[2],1,p,"x")),
            b*p*p-2*a,p*p*p,1,1, chprintf(buf[3],"sin(%s)", polynomial(buf[4],1,p,"x")),
            2*a,p*p,1,1, chprintf(buf[5],"x*cos(%s)", polynomial(buf[6],1,p,"x"))
        )
    );
    chprintf(answ[1], "...=%s+C",
        poly2ns(buf[0],3,
            a,p,1,1, chprintf(buf[1],"x^2*sin(%s)", polynomial(buf[2],1,p,"x")),
            b*p+2*a,p*p,1,1, chprintf(buf[3],"sin(%s)", polynomial(buf[4],1,p,"x")),
            2*a,p,1,1, chprintf(buf[5],"x*cos(%s)", polynomial(buf[6],1,p,"x"))
        )
    );
    chprintf(answ[2], "...=%s+C",
        poly2ns(buf[0],3,
            a,3,1,1, chprintf(buf[1],"x^3*cos(%s)", polynomial(buf[2],1,p,"x")),
            b,1,1,1, chprintf(buf[3],"cos(%s)", polynomial(buf[4],1,p,"x")),
            -2*a,p,1,1, chprintf(buf[5],"x*sin(%s)", polynomial(buf[6],1,p,"x"))
        )
    );
    chprintf(answ[3], "...=%s+C",
        poly2ns(buf[0],4,
            a,p,1,1, chprintf(buf[1],"x^2*sin(%s)", polynomial(buf[2],1,p,"x")),
            b,p,1,1, chprintf(buf[3],"sin(%s)", polynomial(buf[4],1,p,"x")),
            -2*a,p,1,1, chprintf(buf[5],"x*sin(%s)", polynomial(buf[6],1,p,"x")),
            2*a,p*p,1,1, chprintf(buf[7],"cos(%s)", polynomial(buf[8],1,p,"x"))
        )
    );

    chprintf(src, "Int((a*x^2+b)*cos(p*x))*diff(x)");
}

void integ307a (const range &r, char *task, char answ[][BUFSZ], char *src)
{
    char buf[10][BUFSZ];
    int a, b, p;
    do{
        a = rndr(r);
        b = rndr(r);
        p = rndr(r);
    }while (!(a!=0 && a!=1 && p!=0 && p!=1 && a!=b));

    strcpy(task, "");
    catprintf(task, "String(\"Найдите интеграл:\")");
    catprintf(task, "\nInt((%s)*e^(%s))*diff(x)",
        polynomial(buf[0],2, a,"x^2",b,""),
        polynomial(buf[1],1, p,"x")
    );

    chprintf(answ[0], "...=(%s)*(%s)+C",
        poly2ns(buf[0],1, 1,p,1,1,chprintf(buf[1],"e^(%s)",polynomial(buf[2],1,p,"x"))),
        poly2ns(buf[3],3,
            a,1,1,1, "x^2",
            -2*a,p,1,1, "x",
            b*p*p+2*a,p*p,1,1, ""
        )
    );
    chprintf(answ[1], "...=(%s)*(%s)+C",
        poly2ns(buf[0],1, 1,p,1,1,chprintf(buf[1],"e^(%s)",polynomial(buf[2],1,p,"x"))),
        poly2ns(buf[3],3,
            a,1,1,1, "x^2",
            -2*a,p*p,1,1, "x",
            b*p*p+2*a,p*p,1,1, ""
        )
    );
    chprintf(answ[2], "...=(%s)*(%s)+C",
        poly2ns(buf[0],1, 1,p,1,1,chprintf(buf[1],"e^(%s)",polynomial(buf[2],1,p,"x"))),
        poly2ns(buf[3],3,
            a,3,1,1, "x^3",
            b,1,1,1, "x",
            2*a,p*p,1,1, ""
        )
    );
    chprintf(answ[3], "...=(%s)*(%s)+C",
        poly2ns(buf[0],1, 1,p*p,1,1,chprintf(buf[1],"e^(%s)",polynomial(buf[2],1,p,"x"))),
        poly2ns(buf[3],3,
            a,1,1,1, "x^2",
            2*a,1,1,1, "x",
            b*p-2*a,p,1,1, ""
        )
    );

    chprintf(src, "Int((a*x^2+b)*e^(p*x))*diff(x)");
}

void integ308a (const range &r, char *task, char answ[][BUFSZ], char *src)
{
    char buf[10][BUFSZ];
    int a, b, p;
    do {
        a = rndr(r);
        b = rndr(r);
        p = rndr(r);
    } while (!(a!=0 && a!=1 && p!=0 && p!=1 && a!=b));

    strcpy(task, "");
    catprintf(task, "String(\"Найдите интеграл:\")");
    catprintf(task, "\nInt((%s)*ln(%s))*diff(x)",
        polynomial(buf[0],2, a,"x^2",b,""),
        polynomial(buf[1],1, p,"x")
    );

    chprintf(answ[0], "...=%s+C",
        poly2ns(buf[0],4,
             a,3,1,1, chprintf(buf[1],"x^3*ln(%s)", polynomial(buf[2],1,p,"x")),
             b,1,1,1, chprintf(buf[3],"x*ln(%s)", polynomial(buf[4],1,p,"x")),
            -a,9,1,1, "x^3",
            -b,1,1,1, "x"
        )
    );
    chprintf(answ[1], "...=%s+C",
        poly2ns(buf[0],4,
             a,p,1,1, chprintf(buf[1],"x^3*ln(%s)", polynomial(buf[2],1,p,"x")),
             b,p,1,1, chprintf(buf[3],"x*ln(%s)", polynomial(buf[4],1,p,"x")),
            -a,9,1,1, "x^3",
            -b,1,1,1, "x"
        )
    );
    chprintf(answ[2], "...=%s+C",
        poly2ns(buf[0],3,
             a,p,1,1, chprintf(buf[1],"x^3*ln(%s)", polynomial(buf[2],1,p,"x")),
             b,p,1,1, chprintf(buf[3],"x*ln(%s)", polynomial(buf[4],1,p,"x")),
            -2*a,1,1,1, "x"
        )
    );
    chprintf(answ[3], "...=%s+C",
        poly2ns(buf[0],4,
             a,3*p,1,1, chprintf(buf[1],"x^3*ln(%s)", polynomial(buf[2],1,p,"x")),
             b,p,1,1, chprintf(buf[3],"x*ln(%s)", polynomial(buf[4],1,p,"x")),
            -a,1,1,1, "x^2",
            -b,1,1,1, ""
        )
    );

    chprintf(src, "Int((a*x^2+b)*ln(p*x))*diff(x)");
}

void integ309a (const range &r, char *task, char answ[][BUFSZ], char *src)
{
    char buf[10][BUFSZ];
    int a, b, p, q;
    do {
        a = rndr(r);
        b = rndr(r);
        p = rndr(r);
        q = rndr(r);
    } while (!(a!=0 && a!=1 && p!=0 && p!=1 && q>1 && a!=b));

    strcpy(task, "");
    catprintf(task, "String(\"Найдите интеграл:\")");
    catprintf(task, "\nInt((%s)*log(%d,%s))*diff(x)",
        polynomial(buf[0],2, a,"x^2",b,""),
        q,
        polynomial(buf[1],1, p,"x")
    );

    chprintf(answ[0], "...=(%s)*log(%d,%s)-(1/ln(%d))*(%s)+C",
        poly2ns(buf[0],2, a,3,3,1,"x", b,1,1,1,"x"),
        q, polynomial(buf[1],1,p,"x"),
        q,
        poly2ns(buf[2],2, a,9,3,1,"x", b,1,1,1,"x")
    );
    chprintf(answ[1], "...=(%s)*log(%d,%s)-(1/ln(%d))*(%s)+C",
        poly2ns(buf[0],2, a,p,2,1,"x", b,p,1,1,"x"),
        q, polynomial(buf[1],1,p,"x"),
        q,
        poly2ns(buf[2],2, a,3,3,1,"x", b,1,1,1,"x")
    );
    chprintf(answ[2], "...=((%s)/(%s))*log(%d,%s)%s+C",
        poly2ns(buf[0],2, a,3,3,1,"x", b,1,1,1,"x"),
        polynomial(buf[1],1, p,chprintf(buf[2],"ln(%d)",q)),
        q, polynomial(buf[3],1,p,"x"),
        poly2s(buf[4],2, -a,9,3,1,"x", -b,1,1,1,"x"),
        poly2ns(buf[5],2, a,9,3,1,"x", b,1,1,1,"x")
    );
    chprintf(answ[3], "...=(%s)-(%s)*log(%d,%s)+C",
        poly2ns(buf[0],2, a,p,1,1,"x", b,p,-1,1,"x"),
        poly2ns(buf[1],2, a,3,3,1,"x", b,1,1,1,"x"),
        q, polynomial(buf[2],1,p,"x")
    );

    chprintf(src, "Int((a*x^2+b)*log(q,p*x))*diff(x)");
}

void integ310a (const range &r, char *task, char answ[][BUFSZ], char *src)
{
    char buf[10][BUFSZ];
    int a, b, p, q;
    do {
        a = rndr(r);
        b = rndr(r);
        p = rndr(r);
        q = rndr(r);
    } while (!(a!=0 && a!=1 && p!=0 && p!=1 && b!=0 && a!=b));

    strcpy(task, "");
    catprintf(task, "String(\"Найдите интеграл:\")");
    catprintf(task, "\nInt((%s)*e^(%s))*diff(x)",
        polynomial(buf[0],2, a,"x",b,""),
        polynomial(buf[1],2, p,"x",q,"")
    );

    chprintf(answ[0], "...=%s+C",
        poly2ns(buf[0],2,
            a,p,1,1, chprintf(buf[1],"x*e^(%s)", polynomial(buf[2],2, p,"x",q,"")),
            b*p-a,p*p,1,1, chprintf(buf[3],"e^(%s)", polynomial(buf[4],2, p,"x",q,""))
        )
    );
    chprintf(answ[1], "...=%s+C",
        poly2ns(buf[0],2,
            a,1,1,1, chprintf(buf[1],"x*e^(%s)", polynomial(buf[2],2, p,"x",q,"")),
            b*p-a,p,1,1, chprintf(buf[3],"e^(%s)", polynomial(buf[4],2, p,"x",q,""))
        )
    );
    chprintf(answ[2], "...=%s+C", //! what???
        poly2ns(buf[0],2,
            a*p,1,1,1, chprintf(buf[1],"x*e^(%s)", polynomial(buf[2],2, p,"x",q,"")),
            b*p-(b+a),1,1,1, chprintf(buf[3],"e^(%s)", polynomial(buf[4],2, p,"x",q,""))
        )
    );
    chprintf(answ[3], "...=%s+C",
        poly2ns(buf[0],2,
            a,p*p,1,1, chprintf(buf[1],"x*e^(%s)", polynomial(buf[2],2, p,"x",q,"")),
            b-a*p,p*p,1,1, chprintf(buf[3],"e^(%s)", polynomial(buf[4],2, p,"x",q,""))
        )
    );

    chprintf(src, "Int((a*x+b)*e^(p*x+q))*diff(x)");
}

void integ313a (const range &r, char *task, char answ[][BUFSZ], char *src)	//122
{
    char buf[10][BUFSZ];
    int a, b, p, q;
    do {
        a = rndr(r);
        b = rndr(r);
        p = rndr(r);
        q = rndr(r);
    } while (!(a!=0 && a!=1 && p!=0 && p!=1 && b!=0));

    char *pxq = new char[BUFSZ];
    polynomial(pxq, 2,p,"x",q,"");

    strcpy(task, "");
    catprintf(task, "String(\"Найдите интеграл:\")");
    catprintf(task, "\nInt((%s)*cos(%s))*diff(x)",
        polynomial(buf[0], 2,a,"x",b,""),
        polynomial(pxq, 2,p,"x",q,"")
    );

    chprintf(answ[0], "...=%s+C",
        poly2ns(buf[0], 3,
            a,p,1,1, chprintf(buf[1], "x*sin(%s)", pxq),
            b,p,1,1, chprintf(buf[2], "sin(%s)", pxq),
            a,p*p,1,1, chprintf(buf[3], "cos(%s)", pxq)
        )
    );

    chprintf(answ[1], "...=%s+C",
        poly2ns(buf[0], 3,
            -a,p,1,1, chprintf(buf[1], "x*sin(%s)", pxq),
            -b,p,1,1, chprintf(buf[2], "sin(%s)", pxq),
            -a,p*p,1,1, chprintf(buf[3], "cos(%s)", pxq)
        )
    );

    chprintf(answ[2], "...=%s+C",
        poly2ns(buf[0], 3,
            a,p,1,1, chprintf(buf[1], "x*cos(%s)", pxq),
            b,p,1,1, chprintf(buf[2], "cos(%s)", pxq),
            -a,p*p,1,1, chprintf(buf[3], "sin(%s)", pxq)
        )
    );

    chprintf(answ[3], "...=%s+C",
        poly2ns(buf[0], 3,
            a,2,1,1, chprintf(buf[1], "x^2*sin(%s)", pxq),
            b,1,1,1, chprintf(buf[2], "x*sin(%s)", pxq),
            1,p,1,1, chprintf(buf[3], "cos(%s)", pxq)
        )
    );

    chprintf(src, "Int((a*x+b)*cos(p*x+q))*diff(x)");

    delete pxq;
}

void integ314a (const range &r, char *task, char answ[][BUFSZ], char *src)	 //123
{
    char buf[10][BUFSZ];
    int a, b;
    do {
        a = rndr(r);
        b = rndr(r);
    } while (!(a!=0 && a!=1 && b!=0 && b!=a));

    char ax[BUFSZ], bx[BUFSZ];

    strcpy(task, "");
    catprintf(task, "String(\"Найдите интеграл:\")");
    catprintf(task, "\nInt(e^(%s)*sin(%s))*diff(x)",
        polynomial(ax, 1,a,"x"),
        polynomial(bx, 1,b,"x")
    );

    chprintf(answ[0], "...=%s+C",
        poly2ns(buf[0],2,
             a,a*a+b*b,1,1, chprintf(buf[1], "e^(%s)*sin(%s)", ax, bx),
            -b,a*a+b*b,1,1, chprintf(buf[2], "e^(%s)*cos(%s)", ax, bx)
        )
    );

    chprintf(answ[1], "...=%s+C",
        poly2ns(buf[0],2,
             1,1,1,1, chprintf(buf[1], "e^(%s)*sin(%s)", ax, bx),
             b,a,1,1, chprintf(buf[2], "e^(%s)*cos(%s)", ax, bx)
        )
    );

    chprintf(answ[2], "...=%s+C",
        poly2ns(buf[0],2,
             b,a*a+b*b,1,1, chprintf(buf[1], "e^(%s)*sin(%s)", ax, bx),
            -a,a*a+b*b,1,1, chprintf(buf[2], "e^(%s)*cos(%s)", ax, bx)
        )
    );

    chprintf(answ[3], "...=%s+C",
        poly2ns(buf[0],2,
             a,b,1,1, chprintf(buf[1], "e^(%s)*cos(%s)", ax, bx),
            -a,b,1,1, chprintf(buf[2], "e^(%s)*sin(%s)", ax, bx)
        )
    );

    chprintf(src, "Int(e^(a*x)*sin(b*x))*diff(x)");
}

void integ315a (const range &r, char *task, char answ[][BUFSZ], char *src)	 //124
{
    char buf[10][BUFSZ];
    int a, b;
    do {
        a = rndr(r);
        b = rndr(r);
    } while (!(a!=0 && a!=1 && b!=0 && b!=a));

    char ax[BUFSZ], bx[BUFSZ];

    strcpy(task, "");
    catprintf(task, "String(\"Найдите интеграл:\")");
    catprintf(task, "\nInt(e^(%s)*cos(%s))*diff(x)",
        polynomial(ax, 1,a,"x"),
        polynomial(bx, 1,b,"x")
    );

    chprintf(answ[0], "...=%s+C",
        poly2ns(buf[0],2,
             a,a*a+b*b,1,1, chprintf(buf[1], "e^(%s)*cos(%s)", ax, bx),
             b,a*a+b*b,1,1, chprintf(buf[2], "e^(%s)*sin(%s)", ax, bx)
        )
    );

    chprintf(answ[1], "...=%s+C",
        poly2ns(buf[0],2,
             a,b,1,1, chprintf(buf[1], "e^(%s)*sin(%s)", ax, bx),
            -1,1,1,1, chprintf(buf[2], "e^(%s)*cos(%s)", ax, bx)
        )
    );

    chprintf(answ[2], "...=%s+C",
        poly2ns(buf[0],2,
             a,a*a+b*b,1,1, chprintf(buf[1], "e^(%s)*cos(%s)", ax, bx),
            -a,a*a+b*b,1,1, chprintf(buf[2], "e^(%s)*sin(%s)", ax, bx)
        )
    );

    chprintf(answ[3], "...=%s+C",
        poly2ns(buf[0],2,
             b,a,1,1, chprintf(buf[1], "e^(%s)*cos(%s)", ax, bx),
             1,1,1,1, chprintf(buf[2], "e^(%s)*sin(%s)", ax, bx)
        )
    );

    chprintf(src, "Int(e^(a*x)*cos(b*x))*diff(x)");
}

/*

void integ311a (const range &r, char *task, char answ[][BUFSZ], char *src)
{
    char buf[10][BUFSZ];
    int a, b, l, p, q;
    do {
        a = rndr(r);
        b = rndr(r);
        l = rndr(r);
        p = rndr(r);
        q = rndr(r);
    } while (!(a>1 && b!=0 && p!=0 && q!=0));

    strcpy(task, "");
    catprintf(task, "String(\"Найдите интеграл:\")");
    catprintf(task, "\nInt((%s)*(%d)^(%s))*diff(x)",
        polynomial(buf[0],2, b,"x",l,""),
        a,
        polynomial(buf[1],2, p,"x",q,"")
    );

    chprintf(answ[0], "...=(%s)*(%s)+C",
        poly2ns(buf[9],1, 1,p,1,1, chprintf(buf[8], "((%d)^(%s)/ln(%d))", a, polynomial(buf[7],2,p,"x",q,""), a)),
        poly2ns(buf[0],3,
            b,1,1,1,"x",
            l,1,1,1,"",
            -b,p,-1,1, chprintf(buf[4],"ln(%d)",a)
        )
    );
    chprintf(answ[1], "...=String(\"[not defined]\")");
    chprintf(answ[2], "...=String(\"[not defined]\")");
    chprintf(answ[3], "...=String(\"[not defined]\")");

    chprintf(src, "Int((b*x+l)*a^(p*x+q))*diff(x)");
}

void integ312a (const range &r, char *task, char answ[][BUFSZ], char *src)
{
    char buf[10][BUFSZ];
    int a, b, p, q;
    do {
        a = rndr(r);
        b = rndr(r);
        p = rndr(r);
        q = rndr(r);
    } while (!(a!=0 && p!=0 && q!=0));

    strcpy(task, "");
    catprintf(task, "String(\"Найдите интеграл:\")");
    catprintf(task, "\nInt((%s)*sin(%s))*diff(x)",
        polynomial(buf[0],2, a,"x",b,""),
        polynomial(buf[1],2, p,"x",q,"")
    );

    chprintf(answ[0], "...=%s+C",
        poly2ns(buf[0],2,
            -1,p,1,1, chprintf(buf[1],"((%s)*cos(%s))", polynomial(buf[3],2, a,"x",b,""), polynomial(buf[2],1,p,"x")),
             1,p*p,1,1, chprintf(buf[8],"sin(%s)", polynomial(buf[4],2,p,"x",q,""))
        )
    );
    chprintf(answ[1], "...=String(\"[not defined]\")");
    chprintf(answ[2], "...=String(\"[not defined]\")");
    chprintf(answ[3], "...=String(\"[not defined]\")");

    chprintf(src, "Int((a*x+b)*sin(p*x+q))*diff(x)");
}
  */
void integ312a (const range &r, char *task, char answ[][BUFSZ], char *src)
{
   char buf[10][BUFSZ];
    int a, b, p, q;
    do {
        a = rndr(r);
        b = rndr(r);
        p = rndr(r);
        q = rndr(r);
    } while (!(a!=0 && a!=1 && p!=0 && p!=1 && b!=0));

    char *pxq = new char[BUFSZ];
    polynomial(pxq, 2,p,"x",q,"");

    strcpy(task, "");
    catprintf(task, "String(\"Найдите интеграл:\")");
    catprintf(task, "\nInt((%s)*sin(%s))*diff(x)",
        polynomial(buf[0], 2,a,"x",b,""),
        polynomial(pxq, 2,p,"x",q,"")
    );

    chprintf(answ[0], "...=%s+C",
        poly2ns(buf[0], 3,
            -a,p,1,1, chprintf(buf[1], "x*cos(%s)", pxq),
            -b,p,1,1, chprintf(buf[2], "cos(%s)", pxq),
            a,p*p,1,1, chprintf(buf[3], "sin(%s)", pxq)
        )
    );

    chprintf(answ[1], "...=%s+C",
        poly2ns(buf[0], 3,
             a,p,1,1, chprintf(buf[1], "x*cos(%s)", pxq),
             b,p,1,1, chprintf(buf[2], "cos(%s)", pxq),
            -1,p*p,1,1, chprintf(buf[3], "sin(%s)", pxq)
        )
    );

    chprintf(answ[2], "...=%s+C",
        poly2ns(buf[0], 3,
            -a,p,1,1, chprintf(buf[1], "x*sin(%s)", pxq),
            -b,p,1,1, chprintf(buf[2], "sin(%s)", pxq),
            a,p*p,1,1, chprintf(buf[3], "cos(%s)", pxq)
        )
    );

    chprintf(answ[3], "...=%s+C",
        poly2ns(buf[0], 3,
            a,1,1,1, chprintf(buf[1], "xcos(%s)", pxq),
            b,1,1,1, chprintf(buf[2], "cos(%s)", pxq),
            -a,p,1,1, chprintf(buf[3], "sin(%s)", pxq)
        )
    );

    chprintf(src, "Int((a*x+b)*sin(p*x+q))*diff(x)");

    delete pxq;
} 




