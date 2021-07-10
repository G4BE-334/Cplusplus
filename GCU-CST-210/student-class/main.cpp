#include <iostream>
#include <cstdlib>
#include <ctime>
#include "student.h"

using namespace std;

int main()
{
    Student s1;
    s1.setFname("Sam");
    s1.setLname("Brown");
    cout << s1.getFname() << "   " << s1.getLname() << endl;
    srand(time(0));
    double g1 = (rand()%101+100)/2.0;
    s1.setGrade1(g1);
    s1.setGrade2((rand()%101+100)/2.0);
    s1.setGrade3((rand()%101+100)/2.0);
    cout << s1.average();
    
    Student s2("William","Peterson");
    Student sr[3];
    sr[0].setFname("Jill");
    
    return 0;
}
