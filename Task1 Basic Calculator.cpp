#include <iostream>
using namespace std;

float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
    int choice;
    float num1, num2, result;

    cout << "Welcome to the Basic Calculator!" << endl;
    cout << "Select an operation:" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "Enter your choice (1/2/3/4): ";
    cin >> choice;

    if (choice < 1 || choice > 4) {
        cout << "Invalid choice. Please select 1, 2, 3, or 4." << endl;
        return 1;
    }

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    switch (choice) {
        case 1:
            result = add(num1, num2);
            cout << "Result of addition: " << result << endl;
            break;
        case 2:
            result = subtract(num1, num2);
            cout << "Result of subtraction: " << result << endl;
            break;
        case 3:
            result = multiply(num1, num2);
            cout << "Result of multiplication: " << result << endl;
            break;
        case 4:
            if (num2 == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
            } else {
                result = divide(num1, num2);
                cout << "Result of division: " << result << endl;
            }
            break;
    }

    return 0;
}

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}
