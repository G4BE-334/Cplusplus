#include "code.h"
#include <time.h>

Code::Code()
{

}

void Code::setGuessedCode(string* gCode)
{
    guessedCode = gCode;
}

void Code::setSequence(string* s)
{
    sequence = s;
}

string* Code::getSequence()
{
    return sequence;
}

void Code::display()
{
    for (int i = 0; i < 4; i++){ 
        cout << sequence[i] << " ";
    }
}





