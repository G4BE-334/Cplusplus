#include <iostream>
#include <time.h>
#include <algorithm>
using namespace std;

int main()
{
    // seeding the rand
    srand(time(NULL));
    
    // Generating the array with 10 numbers
    int randArray[10];
    cout << "Original Array: " ;
    // Populating array with random int between 1 and 100
    for (int i = 0; i < 10; i++)
        {
            randArray[i] = rand() % 100 + 1;
            // Printing original array
            if (i != 9) 
            {
                cout << randArray[i] << ", "  ;
            }
            else
            {
                cout << randArray[i] << endl;
            }
        }
    // Finding maximum and minimum value in the array    
    int *min, *max;
    min = std::min_element(randArray,randArray+10);
    *min = NULL;
    max = std::max_element(randArray,randArray+10);
    *max = NULL;
    
    cout << "New Array: " ;
    
    // It is not possible to delete elements in an array in C++ but we can
    // set their values to 0 to not consider them and not print
    for (int i = 0; i < 10; i++)
    {
        if (randArray[i] != (*min && *max))
        {
            if (i != 9) 
            {
                cout << randArray[i] << ", "  ;
            }
            else
            {
                cout << randArray[i] << endl;
            }
        }
    }
}
