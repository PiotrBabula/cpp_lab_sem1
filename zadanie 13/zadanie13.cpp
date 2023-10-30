#include <iostream>
#include <windows.system.h>

using namespace std;

int main()
{
    HANDLE hOut;
    hOut = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hOut, 4);
    cout << "\n----------------------------------------------------\n"
         << "-- Program obliczajacy wiek uzytkownika za 25 lat --\n"
         << "----------------------------------------------------\n";
    SetConsoleTextAttribute(hOut, 15);
    int currentAge, futureAge;
    cout << "Wprowadz aktualny wiek: " << endl;
    cin >> currentAge;

    futureAge = currentAge += 25;
    cout << "----------\n"
            "Twoj wiek za 25 lat to "
         << futureAge << endl;
    return 0;
}
