#pragma once
#include "IOperator.h"

class Sub : public IOperator 
{
    virtual float op(float num1, float num2);
};