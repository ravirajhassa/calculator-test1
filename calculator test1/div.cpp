#include "Header.h"

double divide(int a, int b)
{
    if (b == 0)
    {
        cout << "Division by zero not allowed!" << endl;
        return 0;
    }
    return (double)a / b;
}