#include "Header.h"

int main()
{
    int num1, num2, choice;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "\n1. Add";
    cout << "\n2. Subtract";
    cout << "\n3. Multiply";
    cout << "\n4. Divide";
    cout << "\nEnter choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Result = " << add(num1, num2);
        break;

    case 2:
        cout << "Result = " << sub(num1, num2);
        break;

    case 3:
        cout << "Result = " << mul(num1, num2);
        break;

    case 4:
        cout << "Result = " << divide(num1, num2);
        break;

    default:
        cout << "Invalid choice!";
    }

    return 0;
}