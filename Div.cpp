#include "Div.h"

float Div::op(float num1, float num2)
{
    float res = 0;

    if (num2 != 0)
        res = num1 / num2;

    return res;
}