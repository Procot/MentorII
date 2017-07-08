#include "taskgroup_taskloaderhelper.h"
#include "../taskgroup.h"
#include "taskloader.h"
#include "../../utils/utils.h"
#include <QDebug>

bool TaskGroup_TaskLoaderHelper::accept (QDomElement *node)
{
	return node->tagName()=="group";
}

TaskNode *TaskGroup_TaskLoaderHelper::get (QDomElement *node)
{
	TaskGroup *g = new TaskGroup();
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
			else
				g->addChild(TaskLoader::instance()->get(&e));
		}
	}
	return g;
}

