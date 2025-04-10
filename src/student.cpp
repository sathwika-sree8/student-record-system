#include "student.h"
#include <iostream>
using namespace std;

Student::Student() : roll(0), name(""), marks(0.0f) {}

Student::Student(int r, string n, float m) : roll(r), name(n), marks(m) {}

void Student::input() {
    cout << "Enter Roll Number: ";
    cin >> roll;
    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter Marks: ";
    cin >> marks;
}

void Student::display() const {
    cout << "📚 Roll: " << roll << ", Name: " << name << ", Marks: " << marks << endl;
}

// 👇 Add these definitions too!
int Student::getRoll() const {
    return roll;
}

void Student::setName(const string& newName) {
    name = newName;
}

void Student::setMarks(float newMarks) {
    marks = newMarks;
}
