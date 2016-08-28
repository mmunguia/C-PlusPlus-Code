// Author: Marcos Munguia
// Date: 8/27/16
// Program: Function Demonstration

#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

// Function 'average' declaration

inline float average(float x, int y)
{
    float ztot;
    ztot = x / y;
    return (ztot);
}

int main()
{
    float num1, num2, total, total2;
    int inum3;
    char again = 'y';
    while(again == 'y')
    {
        system("cls");
        cout << "\n1 of 3 - Enter FIRST numeric value: ";
        cin >> num1;
        cout << "\n2 of 3 - Enter SECOND numeric value: ";
        cin >> num2;
        cout << "\n3 of 3 - Enter an integer number: ";
        cin >> inum3;
        system("cls");

        total = num1 + num2;
        cout << "\n\n" << num1 << " + " << num2 << " = " << total;
        cout << "\n\n" << total << " / " << inum3 << " = " << average(total,inum3) << "\n\n";

        total = num2 - num1;
        total2 = num1 - num2;

        cout << num2 << " - " << num1 << " = " << total << "\n\n";
        cout << num1 << " - " << num2 << " = " << total2 << "\n\n";

        cout << "Function Demonstration\n";
        cout << "The average of " << setprecision(6) << total
             << " + " << inum3 << " is " << average(total, inum3);

        cout << "\nNow the average of " << setprecision(6) << total2;
        cout << " + " << inum3 << " is " << average(total2, inum3);
        cout << "\n\nRun this Again (Y or N): ";
        cin >> again;
        again = tolower(again);
    }
    system("cls");
}
