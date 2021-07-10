#include "quad.h"
#include <iostream>
#include <cmath>
using namespace std;
Quadratic::Quadratic()
{
    a = 0;
    b = 0;
    c = 0;
}
Quadratic::Quadratic(double A, double B, double C)
{
    a = A;
    b = B;
    c = C;
}
bool Quadratic::discriminant()
{
    if ((b * b - 4 * a * c) < 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
double Quadratic::getSolution1()
{
    if (!discriminant()) {
        return 0;
        // No solution
    }
    else {
        return ((-b - sqrt(b * b - 4 * a * c)) / (2*a));
        // Returning the smaller of the 2 solutions
    }
}
double Quadratic::getSolution2()
{
    if (!discriminant()) {
        return 0;
        // No solution
    }
    else {
        return ((-b + sqrt(b * b - 4 * a * c)) / (2*a));
    }
}


