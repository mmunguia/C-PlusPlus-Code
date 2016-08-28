// Author: Marcos Munguia
// Date: 8/27/16
// Program: Functions - Passing values to functions
#include <conio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

// Prototypes
float calculations(float, float);

int main()
{
    char again = 'y';
    float num1, num2, result;

    while(again == 'y')
    {
        system("cls");
        cout << "\n1 of 2 - Enter First Number: ";
        cin >> num1;
        cout << "\n2 of 2 - Enter Second Number: ";
        cin >> num2;

        system("cls");
        cout << calculations(num1, num2);
        cout << calculations(num1 + 5.5, num2 - 4.5);
        cout << calculations(12.3, 24.5);
        cout << calculations(num1, 16.7);

        cout << "\nRun this Again(Y or N): ";
        cin >> again;
        again = tolower(again);
    }
    system("cls");
}

float calculations(float n1, float n2)
{
    static int count = 0;
    float total;
    count = count + 1;
    total = n1 - n2;
    cout << "\nCalculation #" << count << "\t" << n1 << " - " << n2 << " = ";
    return total;
}
