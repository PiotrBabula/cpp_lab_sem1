#include <iostream>
#include <string>
#include <windows.system.h>

using namespace std;

int main()
{

    HANDLE hOut;
    hOut = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hOut, 4);
    cout << "\n---------------------------------------------------\n"
         << "--- Program obliczajacy obwod i pole prostokata ---\n"
         << "---------------------------------------------------\n";
    SetConsoleTextAttribute(hOut, 15);

    double a, b, P, Ob;
    string choice;

    // Simple menu
    cout << "MENU" << endl;
    cout << "1 - oblicz pole prostokata" << endl;
    cout << "2 - oblicz obwod prostokata" << endl;

    cout << "\nDokonaj wyboru:" << endl;
    cin >> choice;

    for (;;)
    {
        if (choice == "1")
        {
            cout << "1 - pole prostokata " << endl;

            cout << "Wprowadz bok a: " << endl;
            cin >> a;

            cout << "Wprowadz bok b: " << endl;
            cin >> b;

            P = a * b;

            cout << "----------\n"
                    "Pole prostokata = "
                 << P << endl;
            return 0;
        }
        else if (choice == "2")
        {
            cout << "2 - obwod prostokata " << endl;

            cout << "Wprowadz bok a: " << endl;
            cin >> a;

            cout << "Wprowadz bok b: " << endl;
            cin >> b;

            Ob = 2 * (a + b);
            cout << "Obwod prostokata = " << Ob << endl;
            return 0;
        }
        else
        {
            cout << "Dokonano blednego wyboru"
                    "\nwybierz 1 lub 2"
                 << endl;
            cin >> choice;
        }
    }
}
