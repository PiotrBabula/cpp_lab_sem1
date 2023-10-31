#include <iostream>

using namespace std;

int main()
{
    int dayNumber;
    string prefix = " Dzien tygodnia to: ";

    cout << "podaj numer dnia tygodnia" << endl;
    cin >> dayNumber;

    switch (dayNumber)
    {
    case 1:
        cout << dayNumber << prefix << "Niedziela";
        break;
    case 2:
        cout << dayNumber << prefix << "Poniedzialek";
        break;
    case 3:
        cout << dayNumber << prefix << "Wtorek";
        break;
    case 4:
        cout << dayNumber << prefix << "Sroda";
        break;
    case 5:
        cout << dayNumber << prefix << "Czwartek";
        break;
    case 6:
        cout << dayNumber << prefix << "Piatek";
        break;
    case 7:
        cout << dayNumber << prefix << "Sobota";
        break;
    default:
        cout << "Tydzien ma tylko 7 dni";
    }
    return 0;
}