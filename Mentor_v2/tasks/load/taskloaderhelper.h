#pragma once
#include <QtXml/QDomElement>
#include "../tasknode.h"
#include "../../utils/chain.h"

typedef ChainHelper<QDomElement *, TaskNode *> TaskLoaderHelper;

