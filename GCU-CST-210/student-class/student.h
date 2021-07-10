#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student
{
    private:
    string fname;
    string lname;
    double grade1;
    double grade2;
    double grade3;
    
    public:
    Student();
    ~Student();
    Student(string f, string l);
    Student(string f, string l, double g1, double g2, double g3);
    
    double average();
    double minGrade();
    double maxGrade();
    
    void setFname(string f);
    void setLname(string l);
    void setName(string f, string l);
    void setGrade1(double g1);
    void setGrade2(double g2);
    void setGrade3(double g3);
    void setGrades(double g1, double g2, double g3);
    string getFname();
    string getLname();
    double getG1();
    double getG2();
    double getG3();
    
};

#endif