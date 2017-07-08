#include "utils.h"
#include "../tasks/tasktree.h"
#include "../tasks/load/taskloader.h"
#include <QImage>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QPixmap>

QImage Utils::loadImage (const QString &filename)
{
	return QPixmap(":/images/apps/"+filename).toImage();
			//QImage::fro (QSize(32,32), QImage::Format_ARGB32_Premultiplied);
}

TaskTree *Utils::loadTaskTreeFromXML (const QString &xmlfile)
{
	TaskTree *tree = new TaskTree();
	TaskLoader *loader = TaskLoader::instance();
	QDomDocument doc;

	QFile file(xmlfile);
	if (file.open(QIODevice::ReadOnly))
	{
		QByteArray data = file.readAll();
		doc.setContent(QString(data));
	}

	QDomElement el = doc.documentElement();
	tree->setRoot(loader->get(&el));
	return tree;
}

