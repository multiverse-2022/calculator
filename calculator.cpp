#include "calculator.h"
#include <iostream>
#include "Add.h"
#include "Sub.h"
#include "Mul.h"
#include "Div.h"

using namespace std;

void Calculator::input()
{
    cin >> num1 >> op >> num2;

    if(op == '+')
        iop = (IOperator *)new Add();
    else if (op == '-')
        iop = (IOperator *)new Sub();
    else if (op == '*')
        iop = (IOperator *)new Mul();
    else if (op == '/')
        iop = (IOperator *)new Div();
}

void Calculator::calculate()
{
    res = iop->op(num1, num2);
    delete iop;
}

void Calculator::output()
{
    cout << res << endl;
}