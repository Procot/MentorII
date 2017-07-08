#include "txttobmp.h"
#include <QImage>
#include <QApplication>
#include <QCoreApplication>
#include <QFile>
#include <QDir>
#include <QDebug>
#include <QStringList>
#include <QTextCodec>
#include <QProcess>
#include <QTextStream>
#include <QThread>

#undef UNICODE
#include <windows.h>

TxtToBmp *TxtToBmp::instance()
{
	static TxtToBmp tx;
	return &tx;
}

void TxtToBmp::setFont (const QFont &font)
{
	_font = font;
}

QFont &TxtToBmp::font()
{
	return _font;
}

QImage TxtToBmp::convert (const QString &line)
{
	return TxtToBmp::convert(QStringList() << line);
}

QImage TxtToBmp::convert (const QStringList &lines)
{
    int left = 10, top = 10;
   // QString workdir = QDir::toNativeSeparators(QApplication::applicationDirPath()) + "\\utility\\";
	QString workdir = QApplication::applicationDirPath() + "/utility/";
    qDebug() << workdir;


	QString util=workdir + "txt2bmp.exe",
			txt = workdir + "tmp.txt",
			bmp = workdir + "tmp.bmp";
	QStringList argum =	 QStringList()<<txt<< bmp;
    
	QFile config(workdir + "custom.cfg");
    config.open(QIODevice::WriteOnly);
    QTextStream cfg(&config);
    cfg.setCodec("cp1251");
    cfg << left << "\n"
        << top  << "\n"
        << _font.family() << "\n"
        << _font.pointSize() << "\n"
        << (_font.bold()? "b" : "x")
        << (_font.italic()? "i" : "x")
        << (_font.underline()? "u" : "x");
    config.close();

    QFile tmp(txt);
    tmp.open(QIODevice::WriteOnly);
    QTextStream tmps(&tmp);
    tmps.setCodec("cp1251");
    for(int i=0; i<lines.count(); ++i)
        tmps << lines[i] << "\n";
    tmp.close();

    QProcess p;
    p.setWorkingDirectory(workdir);

	
    p.start(util,argum );
    p.waitForFinished();

    return QImage(bmp);
}


