#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main() {
    char action;
    float num1, num2, result;
    int mileseconds = 2000;

    cout << "Enter an operator (+ - * / %): ";
    cin >> action;

    while (action != 'q' && action != 'Q') {
        if (action == '+') {
            cout << "Enter 1 number: ";
            cin >> num1;

            cout << "Enter 2 number: ";
            cin >> num2;

            result = num1 + num2;

            cout << "Result: " << result << endl;
            Sleep(mileseconds);
            system("CLS");

        } else if (action == '-') {
            cout << "Enter 1 number: ";
            cin >> num1;

            cout << "Enter 2 number: ";
            cin >> num2;

            result = num1 - num2;

            cout << "Result: " << result << endl;

            Sleep(mileseconds);
            system("CLS");

        } else if (action == '*') {
            cout << "Enter 1 number: ";
            cin >> num1;

            cout << "Enter 2 number: ";
            cin >> num2;

            result = num1 * num2;

            cout << "Result: " << result << endl;

            Sleep(mileseconds);
            system("CLS");
        
        } else if (action == '/') {
            cout << "Enter 1 number: ";
            cin >> num1;

            cout << "Enter 2 number: ";
            cin >> num2;

            if (num2 != 0) {
                result = num1 / num2;

                cout << "Result: " << result << endl;
                Sleep(mileseconds);
                system("CLS");
            
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
                Sleep(mileseconds);
                system("CLS");
            }
        } else if (action == '%') {
            cout << "Enter 1 number: ";
            cin >> num1;

            cout << "Enter 2 number: ";
            cin >> num2;

            if (num2 != 0) {
                result = static_cast<float>(fmod(static_cast<double>(num1), static_cast<double>(num2)));

                cout << "Result: " << result << endl;
                Sleep(mileseconds);
                system("CLS");
            
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
                Sleep(mileseconds);
                system("CLS");
            }
        } else {
            cout << "Invalid operator. Please enter a valid operator (+ - * / %)." << endl;
            Sleep(mileseconds);
            system("CLS");
        }

        cout << "Enter an operator (+ - * / %): ";
        cin >> action;
    }

    Sleep(10);
    cout << "Exiting calculator. Goodbye!" << endl;

    return 0;
}