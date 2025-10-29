#include <iostream>
using namespace std;

int main() {
    int marks;
    char grade;
    

    cout << "enter your marks (0-100): ";
    cin >> marks;
    switch (marks / 10) {
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default:
            grade = 'F';
    }

    cout << "your grade is: " << grade;

    return 0;
}