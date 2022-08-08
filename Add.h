#pragma once
#include "IOperator.h"

class Add : public IOperator
{
    virtual float op(float num1, float num2);
};