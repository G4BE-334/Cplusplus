// Gabriel Aracena
// This is my own work

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    // Initiate variables
    int length;
    string word;
    bool check = true;
    
    // Ask for a word from the user and read in
    cout << "Please enter a word to check if it is a palindrome: " << endl;
    cin >> word;
    
    
    // Always converting to lower case to avoid bugs
    std::for_each(word.begin(), word.end(), [](char & c) {
        c = ::tolower(c);
    });
    
    // Getting the length of the word
    // It is necessary to verify if it is a palindrome
    length = word.length();
    
    // Iterate over the first half of the word to check if its the same as the last half
    for (int i = 0; i < length/2 - 1; i++)
    {
        // If one letter is not equal to the other one change check to false
        // It is not a palindrome then.
        if (word[i] != word[length-(i+1)])
        {
            check = false;
        }
    }
    
    // Print out the result
    if (check)
    {
        cout << "The word " << word << " is a palindrome!" << endl;
    }
    else
    {
        cout << "The word " << word << " is not a palindrome :(" << endl;
    }
}

