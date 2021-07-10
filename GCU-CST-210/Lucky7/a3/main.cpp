// Gabriel Aracena
// This is my own work

#include <iostream>

using namespace std;

int main()
{
    // Initiate the variables
    int a[10];
    int b, c;
    
    cout << "The first 10 terms of the factorial sequence are: " << endl;
    
    // Iteration over the numbers resulting in eachs factorial
    for (int i = 0; i < 10; i++)
    {
        if (i == 0)
        {
            a[i] = 1;
            cout << a[i] << "; ";
        }
        else
        {
            c = 1;
            b = 1;
            while (c <= i) {
                b *= c;
                c++;
            }
            a[i] = b;            
            if (i != 9) {
                cout << a[i] << "; ";
            }
            else {
                cout << a[i] << endl;
            }
        }
    }
}



