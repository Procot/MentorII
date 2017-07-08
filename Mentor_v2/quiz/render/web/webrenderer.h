#pragma once
#include "../../quiz.h"

class WebCallback
{
public:
    virtual void progress (int processed, int totalQuestions) {}
    virtual void started (int totalQuestions) {}
    virtual void done() {}
    virtual bool isCancelled() { return false; }
};

class WebRenderer
{
public:
	static WebRenderer *instance();
    void render (Quiz *quiz, const QString &outputPath, WebCallback *callback = NULL);
};

