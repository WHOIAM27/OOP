#include<iostream>
using namespace std;
class Student {
protected:
    int rollNo;
public:
    Student() {
        rollNo = 0;
        cout << "Student Default Constructor Called" << endl;
    }
    Student(int r) {
        rollNo = r;
        cout << "Student Parameterized Constructor Called" << endl;
    }
    Student(const Student &s) {
        rollNo = s.rollNo;
        cout << "Student Copy Constructor Called" << endl;
    }
    ~Student() {
        cout << "Student Destructor Called" << endl;
    }
};
