// Gabriel Aracena
// This is my own work

#include <iostream>
#include <algorithm>
// Including algorithm package to use min and max functions

using namespace std;

int main() 
{
    // Initiate variables
    int *min, *max;
    int group[5];
    int n;
    
    // For loop to read in the numbers from the user
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter an integer: " << endl;
        cin >> n;
        group[i]= n;
    }
    
    // Print out max and min integers
    max = std::max_element(group,group+5);
    cout << "Largest number: " << *max << endl;
    min = std::min_element(group,group+5);
    cout << "Smallest number: " << *min << endl;
    
}

