// Gabriel Aracena
// This is my own work

#include <iostream>

using namespace std;

int main()
{
    // Initiate variables
    int a, b;
    bool check = true;
    
    // Ask for number from the user and read in
    cout << "Please enter a number to verify if it's a prime number: " << endl;
    cin >> a;
    
    // Check if the number is divisible by any number other than 1 or itself
    for (b = 2; b <= a/2; b++)
    {
        if (a % b == 0)
        {
            check = false;
        }
    }
    
    // Print out the result
    if (check) {
        cout << "The number " << a << " is a prime number" << endl;
    }
    else {
        cout << "The number " << a << " is not a prime number" << endl;
    }
}
