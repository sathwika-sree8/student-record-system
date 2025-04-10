#include "student.h"
#include <iostream>
#include <vector>
using namespace std;

vector<Student> studentList;

void addStudent() {
    Student s;
    s.input();
    studentList.push_back(s);
    cout << "✅ Student added successfully!\n";
}

void viewAllStudents() {
    if (studentList.empty()) {
        cout << "⚠️ No students found.\n";
        return;
    }
    for (const auto& s : studentList) {
        s.display();
    }
}

void searchStudent() {
    int roll;
    cout << "Enter Roll Number to Search: ";
    cin >> roll;
    bool found = false;
    for (const auto& s : studentList) {
        if (s.getRoll() == roll) {
            cout << "🎯 Student Found:\n";
            s.display();
            found = true;
            break;
        }
    }
    if (!found) cout << "❌ Student not found.\n";
}

void updateStudent() {
    int roll;
    cout << "Enter Roll Number to Update: ";
    cin >> roll;
    for (auto& s : studentList) {
        if (s.getRoll() == roll) {
            string newName;
            float newMarks;
            cin.ignore();
            cout << "Enter new name: ";
            getline(cin, newName);
            cout << "Enter new marks: ";
            cin >> newMarks;
            s.setName(newName);
            s.setMarks(newMarks);
            cout << "✅ Record updated successfully!\n";
            return;
        }
    }
    cout << "❌ Student not found.\n";
}

void deleteStudent() {
    int roll;
    cout << "Enter Roll Number to Delete: ";
    cin >> roll;
    for (auto it = studentList.begin(); it != studentList.end(); ++it) {
        if (it->getRoll() == roll) {
            studentList.erase(it);
            cout << "🗑️ Student deleted successfully.\n";
            return;
        }
    }
    cout << "❌ Student not found.\n";
}

int main() {
    int choice;
    do {
        cout << "\n======== Student Record Management System ========\n";
        cout << "1. Add Student\n2. View All Students\n3. Search Student\n";
        cout << "4. Update Student\n5. Delete Student\n6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addStudent(); break;
            case 2: viewAllStudents(); break;
            case 3: searchStudent(); break;
            case 4: updateStudent(); break;
            case 5: deleteStudent(); break;
            case 6: cout << "🚪 Exiting... Bye!\n"; break;
            default: cout << "❌ Invalid choice. Try again!\n";
        }
    } while (choice != 6);

    return 0;
}
