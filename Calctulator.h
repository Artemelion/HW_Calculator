#pragma once
#include <iostream>
using namespace std;

enum Menu
{
    PLUS = 101,
    MINUS = 102,
    DIVIDE = 103,
    MULT = 104,
    EXIT = 0
};

double add(double a, double b) 
{
    return a + b;
}

double subtract(double a, double b) 
{
    return a - b;
}

double multiply(double a, double b) 
{
    return a * b;
}

double divide(double a, double b) 
{
    if (b == 0) 
    {
        cout << "Eror" << endl;
        return 0;
    }
    return a / b;
}

void menu() 
{
    int choice;
    double num1, num2;

    do 
    {
        cout << "Select operation:" << endl;
        cout << PLUS << " - Addition" << endl;
        cout << MINUS << " - Substraction" << endl;
        cout << DIVIDE << " - Division" << endl;
        cout << MULT << " - Multiplucation" << endl;
        cout << EXIT << " - Exit" << endl;
        cout << "Your choice: ";
        cin >> choice;

        if (choice == EXIT) break;

        cout << "First value: ";
        cin >> num1;
        cout << "Second value: ";
        cin >> num2;

        switch (choice) 
        {
        case PLUS:
            cout << "Result: " << add(num1, num2) << endl;
            break;
        case MINUS:
            cout << "Result: " << subtract(num1, num2) << endl;
            break;
        case DIVIDE:
            cout << "Result: " << divide(num1, num2) << endl;
            break;
        case MULT:
            cout << "Result: " << multiply(num1, num2) << endl;
            break;
        default:
            cout << "Eror choice!" << endl;
        }

    } while (choice != EXIT);

    cout << "Program is done." << endl;
}
