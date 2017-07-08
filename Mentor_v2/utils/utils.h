#pragma once
#include <QImage>
#include <QTableWidget>

class TaskTree;
class Utils
{
public:
	static QImage loadImage (const QString &filename);
	static TaskTree *loadTaskTreeFromXML (const QString &xmlfile);
};

