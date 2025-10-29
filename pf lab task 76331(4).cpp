#include <iostream>
using namespace std;

int main() {
    int choice;
    float num1, num2;

    do {
        cout << "\n=== simple caclculator menu ===\n";
        cout << "1. add\n";
        cout << "2. subtract\n";
        cout << "3. exit\n";
        cout << "enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << num1 + num2 << endl;
                break;

            case 2:
                cout << "enter two numbers: ";
                cin >> num1 >> num2;
                cout << "result: " << num1 - num2 << endl;
                break;

            case 3:
                cout << "exiting program goodbye\n";
                break;

            default:
                cout << "invalid choice please try again\n";
        }

    } while (choice = 3);

    return 0;
}