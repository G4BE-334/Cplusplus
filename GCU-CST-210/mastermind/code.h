#ifndef CODE_H
#define CODE_H

#include <string>
#include <iostream>
using namespace std;

class Code
{
    private:
    string *sequence;

    
    public:
    string *guessedCode;
    Code();
    

    void setGuessedCode(string *guessedCode);
    void setAttempts();
    void setSequence(string* s);

    string* getSequence();
    
    void display();
};

#endif