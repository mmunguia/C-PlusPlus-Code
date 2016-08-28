// Author: Marcos Munguia
// Date: 8/27/16
// Program: Recursive Factorial Function - A factorial of a non-negative number
//          n is the product of n * (n - 1) until n is 1.
//          Ex: Factorial of 5 ... 5*4*3*2*1 = 120

#include <iostream>
#include <stdlib.h>
using namespace std;

// Prototypes
int factorial(int);


int main()
{
    int number1;
    cout << "\nEnter a Non-Negative Integer Number: ";
    cin >> number1;
    system("cls");

    cout << "\nThe Factorial of " << number1 << " is " << factorial(number1);
}

int factorial(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

