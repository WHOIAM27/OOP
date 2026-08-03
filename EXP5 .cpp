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

class Sports {
protected:
    int sportsMarks;
public:
    Sports() {
        sportsMarks = 0;
        cout << "Sports Default Constructor Called" << endl;
    }
    Sports(int m) {
        sportsMarks = m;
        cout << "Sports Parameterized Constructor Called" << endl;
    }
    Sports(const Sports &s) {
        sportsMarks = s.sportsMarks;
        cout << "Sports Copy Constructor Called" << endl;
    }
    ~Sports() {
        cout << "Sports Destructor Called" << endl;
    }
};

