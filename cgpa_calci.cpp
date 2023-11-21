#include <iostream>
#include <iomanip>

using namespace std;

// Function to calculate CGPA
double calculateCGPA(int grades[], int credits[], int numCourses) {
    double totalGradePoints = 0;
    int totalCredits = 0;

    for (int i = 0; i < numCourses; i++) {
        totalGradePoints += grades[i] * credits[i];
        totalCredits += credits[i];
    }

    double cgpa = totalGradePoints / totalCredits;
    return cgpa;
}

int main() {
    int numCourses;

    cout << "Enter the number of courses: ";
    cin >> numCourses;

    int grades[numCourses];
    int credits[numCourses];

    cout << "Enter the grades and credits for each course:\n";
    for (int i = 0; i < numCourses; i++) {
        cout << "Course " << i + 1 << " grade (out of 100): ";
        cin >> grades[i];

        cout << "Course " << i + 1 << " credits: ";
        cin >> credits[i];
    }

    // Calculate CGPA
    double cgpa = calculateCGPA(grades, credits, numCourses);

    // Print CGPA with 2 decimal places
    cout << fixed << setprecision(2);
    cout << "CGPA: " << cgpa << endl;

    return 0;
}
