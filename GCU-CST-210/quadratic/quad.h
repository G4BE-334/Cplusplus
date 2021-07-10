//#ifndef QUAD_H
//#define QUAD_H

#include <stdio.h>
#include <string>

using namespace std;

class Quadratic {
    private:
    double a;
    double b;
    double c;
    
    public:
    Quadratic();
    Quadratic(double A, double B, double C);
    double getSolution1();
    double getSolution2();
    bool discriminant();
};
