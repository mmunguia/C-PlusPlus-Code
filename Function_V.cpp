// Author: Marcos Munguia
// Date: 8/27/16
// Program: Functions - Passing by Reference
#include <stdlib.h>
#include <conio.h>
#include <iomanip>
#include <iostream>
using namespace std;

// Prototypes
float calculate1 (float, float);
float calculate2 (float, float&);
float calculate3 (float&, float);
float calculate4 (float&, float&);

// Passing the memory address of the variable to the function

int main()
{
    float number1, number2;
    char again = 'y';
    cout.setf(ios::fixed);

    while(again == 'y')
    {
        system("cls");
        cout << "\n1 of 2 - Enter the First Number: ";
        cin >> number1;

        system("cls");
        cout << "\n2 of 2 - Enter the Second Number: ";
        cin >> number2;

        system("cls");
        cout << "\nNumber1 is " << number1 << "\tNumber2 is " << number2;
        cout << "\nFunction \"calculate1\" yields " << calculate1(number1, number2) << "\n";
        cout << "\nFunction \"calculate2\" yields " << calculate2(number1, number2) << "\n";
        cout << "\nFunction \"calculate3\" yields " << calculate3(number1, number2) << "\n";
        cout << "\nFunction \"calculate4\" yields " << calculate4(number1, number2) << "\n";
        cout << "\nFunction \"calculate2 (arguements reversed)\" yields " << calculate2(number2, number1);

        cout << "\n\nRun this Again? (Y or N): ";
        cin >> again;
        again = tolower(again);
    }
    system("cls");
}

// Function Definitions

float calculate1(float n1, float n2)
{
    float total;
    total = n1 + n2;
    cout << "\n" << n1 << " + " << n2 << " = " << total;
    return total;
}

float calculate2(float n1, float &n2)
{
    float total;
    n1 = n2;
    total = n1 - n2;
    cout << "\n" << n1 << " - " << n2 << " = " << total;
    return total;
}

float calculate3(float &n1, float n2)
{
    float total;
    n2 = n1;
    total = n1 * n2;
    cout << "\n" << n1 << " X " << n2 << " = " << total;
    return total;
}

float calculate4(float &n1, float &n2)
{
    float total;
    total = n1 * n2;
    cout << "\n" << n1 << " X " << n2 << " = " << total;
    return total;
}
