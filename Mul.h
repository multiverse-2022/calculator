#pragma once
#include "IOperator.h"

class Mul : public IOperator
{
    virtual float op(float num1, float num2);
};