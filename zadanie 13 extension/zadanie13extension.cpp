
#include <iostream>
#include <string>
#include <windows.system.h>
#include <sstream>

using namespace std;

int main()
{
    int currentAge, futureAge, properlyAge;
    bool isInt = false;

    HANDLE hOut;
    hOut = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hOut, 4);
    cout << "\n----------------------------------------------------\n"
         << "-- Program obliczajacy wiek uzytkownika za 25 lat --\n"
         << "----------------------------------------------------\n";
    SetConsoleTextAttribute(hOut, 15);

    cout << "Najstarszy czlowiek na swiecie mial 116 lat. " << endl;
    cout << "Wprowadz aktualny wiek (od 0 do 116 lat): " << endl;
    cin >> currentAge;

    if (currentAge < 0 || currentAge > 116)
    {
        for (;;)
        {
            cout << "Wpisano niepoprawny wiek. Wprowadz prawidlowy wiek: " << endl;
            cin >> currentAge;
            if (currentAge < 0 || currentAge > 116)
            {
                cout << "Wpisano niepoprawny wiek. Wprowadz prawidlowy wiek: " << endl;
                cin >> currentAge;
                continue;
            }
            else
            {
                futureAge = currentAge += 25;
                cout << "----------\n"
                        "Twoj wiek za 25 lat to "
                     << futureAge << endl;
                return 0;
            }
        }
    }
    else
    {
        futureAge = currentAge += 25;
        cout << "----------\n"
                "Twoj wiek za 25 lat to "
             << futureAge << endl;
        return 0;
    }
}
