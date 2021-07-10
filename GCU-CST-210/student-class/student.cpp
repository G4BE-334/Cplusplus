#include "student.h"


Student::Student()
{
}

Student::~Student()
{
}

Student::Student(string f, string l)
{
    fname = f;
    lname =l;
}

Student::Student(string f, string l, double g1, double g2, double g3)
{
    fname = f;
    lname = l;
    grade1 = g1;
    grade2 = g2;
    grade3 = g3;
}
    
double Student::average()
{
    return (grade1 + grade2 + grade3) / 3;
}

double Student::minGrade()
{
    double min = grade1;
    if(grade2 < min)
        min = grade2;
    if(grade3 < min)
        min = grade3;
    return min;
}

double Student::maxGrade()
{
    double max = grade1;
    if(grade2 > max)
        max = grade2;
    if(grade3 > max)
        max = grade3;
    return max;
}
    
void Student::setFname(string f)
{
    fname = f;
}

void Student::setLname(string l)
{
    lname =l;
}
void Student::setName(string f, string l)
{
    fname =f;
    lname =l;
}
void Student::setGrade1(double g1)
{
    grade1 = g1;
}
void Student::setGrade2(double g2)
{
    grade2 = g2;
}
void Student::setGrade3(double g3)
{
    grade3 = g3;
}
void Student::setGrades(double g1, double g2, double g3)
{
    grade1 = g1;
    grade2 = g2;
    grade3 = g3;
}

string Student::getFname()
{
    return fname;
}
string Student::getLname()
{
    return lname;
}
double Student::getG1()
{
    return grade1;
}
double Student::getG2()
{
    return grade2;
}
double Student::getG3()
{
    return grade3;
}