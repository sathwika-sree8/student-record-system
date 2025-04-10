#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
private:
    int roll;
    string name;
    float marks;

public:
    Student();
    Student(int r, string n, float m);
    void input();
    void display() const;

    // ✅ Add these:
    int getRoll() const;
    void setName(const string& newName);
    void setMarks(float newMarks);
};

#endif
