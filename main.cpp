#include "Student.h"

int main() {
    cout << "=== Student Information System ===" << endl;

    Student s1;
    s1.setName("Ali");
    s1.setAge(20);
    s1.setRollNo(101);
    s1.setGPA(3.7);
    s1.displayInfo();
    s1.displayGrade();

    Student s2("Ayesha", 19, 102, 3.2);
    s2.displayInfo();
    s2.displayGrade();

    Student s3("Bilal", 21, 103);
    s3.setGPA(2.8);
    s3.displayInfo();
    s3.displayGrade();

    cout << "=== End of Program ===" << endl;
    return 0;
}
 
