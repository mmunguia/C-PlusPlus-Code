// Author: Marcos Munguia
// Date: 8/27/16
// Program: Functions - Demonstration of static variable
#include <stdlib.h>
#include <conio.h>
#include <iostream>
using namespace std;

// Prototypes
float functionCount(float);
void helpDisplay();

int main()
{
    bool again = true;
    char ans = 'y';
    float number1;

    helpDisplay();

    while(again = 'y')
    {
        system("cls");

        cout << "Enter a numeric value: ";
        cin >> number1;

        cout << "\n\nIn the main routine " << functionCount(number1)
             << " was returned from the function";
        cout << "\nVariable number1 in the main is still " << number1;

        cout << "\nHit Any Key to Continue...";
        getch();

        cout << "\n\nRun this again? (Y or N): ";
        cin >> ans;
        ans = tolower(ans);
        if (ans != 'y')
        {
            again = false;
        }
    }
    cout << "\n\nHit Any Key to Continue...";
    getch();
}

// Functions

void helpDisplay()
{
    system("cls");
    cout << "A local variable declared and defined in a block or in a function\n"
         << "will lose its values when the logic leaves that block or function.\n\n"
         << "Declaring that variable as a \"static\" will keep that value,\n"
         << "Should you reenter that block or function, the static variable will\n"
         << "keep its last value";

    cout << "\nHit Any Key to Continue...";
    getch();

}

float functionCount(float num)
{
    float number1;
    static int count = 0;

    // Pass arguement to static variable, number3
    number1 = num;
    count = count + 1;

    cout << "You have now accessed this funcion " << count << " times during this "
         << "execution\n";
    cout << "You passed " << number1 << " to this function";

    cout << "\n\n" << number1;
    number1 = number1 * 10;

    cout << " X 10 = " << number1;

    return(number1);
}
