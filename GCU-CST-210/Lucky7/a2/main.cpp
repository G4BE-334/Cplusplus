// Gabriel Aracena
// This is my own work

#include <iostream>

using namespace std;

int main()
{
    // Initiate the variables
    long a = 1;
    
    // b starts as 1 to count first not null multiple of 7 
    long b = 1;
    
    // For loop 48 times for the count because 0 and 1 are the first 2 multiples of 7
    for (int i = 0; i < 48; i++)
    {
        a *= 7;
        b += a;
    }
    cout << "Sum of the first 50 multiples of 7:  " << b << endl;
}

