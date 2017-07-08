#pragma once
#include "generatedquestion.h"

class Integrals_GeneratedQuestion : public GeneratedQuestion
{
public:
    virtual QString itemType() const { return "integrals"; }
    Integrals_GeneratedQuestion (QuizQuestion *q);
    Integrals_GeneratedQuestion();
    int key() const; void setKey (int newkey);
    int integralIndex() const; void setIntegralIndex (int newidx);
    virtual void regenerate();
private:
    int _key, _index;
};

