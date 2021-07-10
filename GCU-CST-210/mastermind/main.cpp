/*

functions needed:
    Array of string for the right colors
    Array of string for the user to guess the colors
    Comparison between the two arrays
    Black pegs: return int with amount of black pegs
    White pegs: return int with amount of white pegs

*/

#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>
#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>
#include "code.h"


using namespace std;

int main()
{
    // Set colors
    string newColors[6] = {"Red", "Green", "Yellow", "Blue", "Purple", "Orange"};
    
    // Define variables
    bool isWinner = false;
    srand(time(NULL));

    // Initialize code
    Code codeOne;
    string *sequence;
    
    // Generate random code
    sequence = new string[4];
    for (int i = 0; i < 4; i++)
    {
        int randomColor = rand() % 6;
        sequence[i] = newColors[randomColor];
    }
    codeOne.setSequence(sequence);
    
    // Just to facilitate explanation
    codeOne.display();
    
    // Display rules to the user
    cout << endl;
    cout << "Welcome to the MasterMind Game! A Game where you try to break a code by choosing the colors in the right position" << endl;
    cout << "You will have 10 attempts to guess correctly the sequence of colors" << endl;
    cout << "For every right color in the right position you will get a black peg" << endl;
    cout << "And for every right color in the wrong position you will get a white peg" << endl;
    cout << "Use this information in your favor to try to break the code" << endl;
    cout << "For this game the choosen colors are: " << newColors[0] << ", " << newColors[1] << ", " << newColors[2] << ", " << newColors[3] << ", " << newColors[4] << ", and " << newColors[5] << endl;
    cout << "Good Luck!" << endl;
    
    // Set variables for attempt
    int attempt = 0;
    
    // Drive the game 
    while (isWinner == false)
    {
        // Initiate variables
        int whitePegs = 0;
        int blackPegs = 0;
        bool pegsChecked[4] = {false, false, false, false};
        
        cout << "Please enter the colors in sequence" << endl;
        
        // Initiate guess from the user
        string guessedCode[4];
        
        // Save guess from the user
        for (int i = 0; i<4; i++)
        {
            cin >> guessedCode[i];
        }
        
        // Compare the guess with the real code
        // Always check first for black pegs
        for (int x=0; x<4; x++)
        {
            
            // Convert to lowercase to ignore case sensitive
            for_each(guessedCode[x].begin(), guessedCode[x].end(), [](char & c) {
                c = ::tolower(c);
            });
            for_each(sequence[x].begin(), sequence[x].end(), [](char & c) {
                c = ::tolower(c);
            });
            
            if (guessedCode[x] == sequence[x] and pegsChecked[x] == false)
            {
                blackPegs++;
                pegsChecked[x] = true;
            }
        }   
        // Then check for white pegs
        for (int x=0; x<4; x++)
        {
            for (int j=0; j<4; j++)
            {
                for_each(sequence[j].begin(), sequence[j].end(), [](char & c) {
                    c = ::tolower(c);
                });
                    
                if (guessedCode[x] == sequence[j] and pegsChecked[j] == false and x != j)
                {
                    whitePegs++;
                    pegsChecked[j] = true;
                }
            }
        }
        attempt++;
        if (blackPegs == 4)
        {
            cout << "Congratulations! You beat the game" << endl;
            isWinner = true;
            break;
        }
        if (attempt == 10)
        {
            cout << "Sorry, you have no attempts left, try harder next time! " << endl;
            cout << "The correct code is: ";
            codeOne.display();
        }
        else {
            cout << "You got " << blackPegs << " black pegs and " << whitePegs << " white pegs." << endl;
            cout << "You still have " << 10 - attempt << " left. Try again" << endl;

        }
    }
}
    


