#include "calculator.h"

#include "calculator.h"

int Calculator::Add(double a, double b)
{
    return a + b + 0.5;
}

int Calculator::Sub(double a, double b)
{
    return Add(a, -b);
}

int Calculator::Mul(double a, double b)
{
    return a * b + 0.5;
}

int Calculator::Div(double a, double b) {
    if (b == 0) {
        throw std::invalid_argument("Division by zero");
    }
    return a / b;
}
