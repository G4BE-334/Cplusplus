#include <iostream>
#include <cstdlib>
#include "quad.h"

using namespace std;

int main() 
{
    double a, b, c = 0;
    for (int i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            cout << "Please enter the value for a: " << endl;
            cin >> a;
        }
        else if (i == 1)
        {
            cout << "Please enter the value for b: " << endl;
            cin >> b;
        }
        else
        {
            cout << "Please enter the value for c: " << endl;
            cin >> c;
        }
    }
    Quadratic quad(a, b, c);
    double sol1 = quad.getSolution1();
    double sol2 = quad.getSolution2();
    if (sol1 == 0 and sol2 == 0)
    {
        cout << "There are no real solutions for this equation" << endl;    
    }
    else {
        cout << "Solutions are " << sol1 << " and " << sol2 << endl;
    }
}




