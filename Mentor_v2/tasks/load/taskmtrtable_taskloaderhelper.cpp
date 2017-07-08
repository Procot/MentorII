#include "taskmtrtable_taskloaderhelper.h"
#include "../taskmtrtable.h"
#include "taskloader.h"
#include "../../utils/utils.h"
#include <QDebug>

bool TaskMTRTable_TaskLoaderHelper::accept (QDomElement *node)
{
	return node->tagName()=="mtrtable";
}

TaskNode *TaskMTRTable_TaskLoaderHelper::get (QDomElement *node)
{
	TaskMTRTable *g = new TaskMTRTable();
	QList<QList<TaskNode *> > col;
	QList<QString> columnTitles;
	QDomNodeList nodes = node->childNodes();
	for(int i=0; i<nodes.count(); ++i)
	{
		QDomNode node = nodes.at(i);
		if (node.isElement())
		{
			QDomElement e = node.toElement();
			if (e.tagName()=="title")
				g->setTitle(e.text());
			else if (e.tagName()=="description")
				g->setDescription(e.text());
			else if (e.tagName()=="img")
				g->setImageFile(e.attribute("src"));
			else if (e.tagName()=="column")
			{
				QList<TaskNode *> curlist;
				QDomNodeList nodes = e.childNodes();
				for(int i=0; i<nodes.count(); ++i)
					if (nodes.item(i).isElement())
					{
						QDomElement e = nodes.item(i).toElement();
						if (e.tagName()=="title")
							columnTitles << e.text();
						else
							curlist << TaskLoader::instance()->get(&e);
					}
				col << curlist;
			}
			else ; //throw 1;
		}
	}
	g->setColumns(col);
	g->setColumnTitles(columnTitles);
	return g;
}

