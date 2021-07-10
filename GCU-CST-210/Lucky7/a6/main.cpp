// Gabriel Aracena
// This is my own work

#include <iostream>
#include <stdlib.h>
#include <algorithm>
using namespace std;

int main()
{
    // Initialize variables
    int n;
    
    // Gets length of the array
    cout << "Please enter the length of the array: " << endl;
    cin >> n;
    
    // Initialize array
    int array[n];
    
    // Intiailize the average counter
    int count = 0;
    cout << "Please enter the value of the elements" << endl;
    
    // Read in the values of the elements for the array
    for (int x = 0; x < n; x++)
    {
        // Storing the values
        cin >> array[x];
        
        // Adding up to the total
        count += array[x];
    }
    
    // Calculate average and display it
    double average = count/double(n);
    cout << "The average of the array is equal to " << average << endl;
}



