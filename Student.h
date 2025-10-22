#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    int rollNo;
    float gpa;

public:
    Student();
    Student(string n, int a, int r, float g = 0.0);

    void setName(string n);
    void setAge(int a);
    void setRollNo(int r);
    void setGPA(float g);

    string getName() const;
    int getAge() const;
    int getRollNo() const;
    float getGPA() const;

    void displayInfo() const;
    void displayGrade() const;

    ~Student();
};

#endif

