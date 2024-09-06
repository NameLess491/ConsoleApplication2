mkdir cpp - calculator
cd cpp - calculator
git init
git remote add origin https ://github.com/NameLess491/cpp-calculator.git

#include <iostream>
using namespace std;

int main() {
    char operation;
    double num1, num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (operation) {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 != 0)
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        else
            cout << "Division by zero is not allowed!" << endl;
        break;
    default:
        cout << "Invalid operator!" << endl;
    }

    return 0;
}
git add main.cpp
git commit - m "Initial commit: added simple calculator"
git push - u origin master
