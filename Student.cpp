#include "Student.h"

Student::Student() {
    name = "Unknown";
    age = 0;
    rollNo = 0;
    gpa = 0.0;
    
}

Student::Student(string n, int a, int r, float g) {
    name = n;
    age = a;
    rollNo = r;
    gpa = g;
    
}

void Student::setName(string n)
{ 
    name = n;
}
void Student::setAge(int a) 
{ 
    age = a;
}
void Student::setRollNo(int r) 
{
    rollNo = r;
}
void Student::setGPA(float g) 
{ 
    gpa = g;
}

string Student::getName() const 
{
    return name;
}
int Student::getAge() const 
{
    return age;
}
int Student::getRollNo() const {
    return rollNo;
}
float Student::getGPA() const 
{
    return gpa;
} 

void Student::displayInfo() const {
    cout << "--------------------------------------" << endl;
    cout << "Name: " << name
        << " | Age: " << age
        << " | Roll No: " << rollNo
        << " | GPA: " << gpa << endl;
}

void Student::displayGrade() const {
    char grade;
    if (gpa >= 3.5)
        grade = 'A';
    else if (gpa >= 3.0)
        grade = 'B';
    else if (gpa >= 2.0)
        grade = 'C';
    else
        grade = 'F';
    cout << "Grade: " << grade << endl;
}

Student::~Student() {
    cout << "Destructor called for " << name << "." << endl;
}






