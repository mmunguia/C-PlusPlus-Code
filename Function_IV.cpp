// Author: Marcos Munguia
// Date: 8/27/16
// Program: Funtions - Passing Array Contents to a function
#include <time.h>
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <conio.h>
using namespace std;

// Prototypes
void initialize(int[]);

int main()
{
    int numbers[30] = {0};
    bool again = true;
    char answer = 'y';
    int numberElements = 0;
    cout.setf(ios::right, ios::adjustfield);

    // Scramble the pseudo random number generator
    srand( (unsigned)time(NULL));

    while(again)
    {
        system("cls");
        cout << "\n\t\tNumbers Array currently contains:\n\n";
        for (int i = 0; i < 30; i++)
        {
            cout << "Index # " << setw(2) << i << " " << setw(4) << numbers[i] << "\t";
            numberElements += 1;
            if (numberElements % 3 == 0)
            {
                cout << "\n";
                numberElements = 0;
            }
         }
         initialize(numbers);
         cout << "\n\nNumbers Array Now contains:\n\n";
         for(int i = 0; i < 30; i++)
         {
             cout << "Index # " << setw(2) << i << " " << setw(4) << numbers[i] << "\t";
             numberElements += 1;
             if (numberElements % 3 == 0)
             {
                 cout << "\n";
                 numberElements = 0;
             }
         }

         cout << "\n\nDo you want to run this again (Y or N): ";
         cin >> answer;
         answer = tolower(answer);
         if (answer != 'y')
                again = false;

    }
    system("cls");
    cout << "\nTerminating Demonstration\n";
}
// Function Definition
void initialize(int darray[30])
{
    for (int i = 0; i < 30; i++)
    {
        darray[i] = rand()% 100 + 1;
    }
}
