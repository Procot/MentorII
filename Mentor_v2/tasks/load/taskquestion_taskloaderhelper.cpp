#include "taskquestion_taskloaderhelper.h"
#include "../taskquestion.h"
#include "../../utils/utils.h"

bool TaskQuestion_TaskLoaderHelper::accept (QDomElement *node)
{
	return node->tagName()=="question";
}

TaskNode *TaskQuestion_TaskLoaderHelper::get (QDomElement *node)
{
	TaskQuestion *q = new TaskQuestion();
	QDomNodeList nodes = node->childNodes();
	for(int i=0; i<nodes.count(); ++i)
	{
		QDomNode node = nodes.at(i);
		if (node.isElement())
		{
			QDomElement e = node.toElement();
			if (e.tagName()=="title")
				q->setTitle(e.text());
			else if (e.tagName()=="img")
				q->setImageFile(e.attribute("src"));
			else if (e.tagName()=="id")
				q->setID(e.text());
			else ;//throw 1; // error!
		}
	}
	return q;
}

