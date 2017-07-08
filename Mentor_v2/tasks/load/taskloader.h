#pragma once
#include <QtXml/QDomElement>
#include <QList>
#include "../tasknode.h"
#include "taskloaderhelper.h"
#include "../../utils/chain.h"

class TaskLoader: public Chain<QDomElement *, TaskNode *> {
public:
	static TaskLoader *instance();
private:
	TaskLoader();
};

