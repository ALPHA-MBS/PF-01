#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char op;

    // 1. Ask for the first number
    cout << "Enter the first number: ";
    cin >> num1;

    // 2. Ask for the second number
    cout << "Enter the second number: ";
    cin >> num2;

    // 3. Ask for the operator at the end
    cout << "Enter the operator (+, -, *, /): ";
    cin >> op;

    // 4. Perform calculation based on the operator
    cout << "Result: ";
    switch (op) {
        case '+':
            cout << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 * num2 << endl;
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0) {
                cout << num1 / num2 << endl;
            } else {
                cout << "Error! Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid operator! Please use +, -, *, or /." << endl;
            break;
    }

    return 0;
}
