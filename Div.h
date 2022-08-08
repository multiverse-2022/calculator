#pragma once
#include "IOperator.h"

class Div : public IOperator
{
    virtual float op(float num1, float num2);
};