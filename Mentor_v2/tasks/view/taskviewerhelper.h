#pragma once
#include "views/taskview.h"
#include "../tasknode.h"
#include "../../utils/chain.h"

typedef ChainHelper<TaskNode *, TaskView *> TaskViewerHelper;

