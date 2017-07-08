#pragma once
#include <QImage>
#include <QString>
#include <QStringList>
#include <QFont>

class TxtToBmp
{
public:
	static TxtToBmp *instance();
public:
	void setFont (const QFont &font);
    QFont &font();
    const QFont &font() const { return _font; }
	QImage convert (const QString &line);
	QImage convert (const QStringList &lines);
private:
	QFont _font;
};

