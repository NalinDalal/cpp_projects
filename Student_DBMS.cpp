#include <iostream>
#include <map>
#include <string>

using namespace std;

// Student structure to store student information
struct Student {
    string name;
    int id;
    float gpa;
};

// Database to store student records
map<int, Student> database;

// Function to add a new student record
void addStudent() {
    Student student;
    cout << "Add Student\n";
    cout << "Name: ";
    cin.ignore();
    getline(cin, student.name);

    cout << "ID: ";
    cin >> student.id;

    cout << "GPA: ";
    cin >> student.gpa;

    // Store the student in the database
    database[student.id] = student;

    cout << "Student record added successfully!\n";
}

// Function to display all student records
void displayStudents() {
    cout << "Student Records\n";

    // Iterate through the database and display student information
    for (const auto& entry : database) {
        const Student& student = entry.second;
        cout << "ID: " << student.id << endl;
        cout << "Name: " << student.name << endl;
        cout << "GPA: " << student.gpa << endl;
        cout << endl;
    }
}

int main() {
    int choice;

    while (true) {
        cout << "Student Database Management System\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                cout << "Exiting the program. Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    }

    return 0;
}
