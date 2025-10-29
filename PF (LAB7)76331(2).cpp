#include <iostream>
using namespace std;

int main() {
    char op;
    int num1, num2;

    cout << "enter first number: ";
    cin >> num1;

    cout << "enter operator (+, -, *, /, %): ";
    cin >> op;

    cout << "enter second number: ";
    cin >> num2;

    switch(op) {
        case '+':
            cout << "result: " << num1 + num2;
            break;
        case '-':
            cout << "result: " << num1 - num2;
            break;
        case '*':
            cout << "result: " << num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                cout << "result: " << num1 / num2;
            else
                cout << "error division by zero";
            break;
        case '%':
            if (num2 != 0)
                cout << "result: " << num1 % num2;
            else
                cout << "error modulus by zero";
            break;
        default:
            cout << "invalid operator";
    }

    return 0;
}