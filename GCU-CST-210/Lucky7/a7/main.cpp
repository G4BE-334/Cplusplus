// Gabriel Aracena
// This is my own work

#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <algorithm>
// A lot of packages required for the completion of this assignment

using namespace std;

int main()
{
    // Initialize variable size of array
    int n;
    
    // Ask the user and read in size of array
    cout << "Please enter the length of the array: " << endl;
    cin >> n;
    
    // Initialize the array
    string array[n];
    
    // Read the file and open it
    ifstream file;
    file.open("file.txt");
    
    // Initialize variables
    string word;
    int stringsLength[n];
    
    // Read strings from a file into the array
    for (int i=0; i < n; i++)
    {
        file >> word;
        array[i] = word;
        
        // Saving on another array the length of the strings to verify the largest one
        stringsLength[i] = array[i].length();
    }
    
    // Find out the string with most character
    int* max;
    max = std::max_element(stringsLength,stringsLength+n);
    
    // Print out the string with most character
    cout << *max << endl;
}

