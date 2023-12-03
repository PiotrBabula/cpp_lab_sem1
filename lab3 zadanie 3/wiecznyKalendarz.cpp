#include <iostream>

using namespace std;

int main()
{

    // Wpisz date
    int day = 0;
    int month = 0;
    int year = 0;

    cout << "Wpisz dzien: ";
    cin >> day;

    cout << "Wpisz miesiac: ";
    cin >> month;

    cout << "Wpisz rok: ";
    cin >> year;

    // oblicz dzien tygodnia
    int dayOfWeek = (day + 2 * (month - 1) + 3 * (year / 4) - year / 100 + year / 400 + 1) % 7;

    // Wyświetl dzien tygodnia
    switch (dayOfWeek)
    {
    case 0:
        cout << "Dzien tygodnia: niedziela" << endl;
        break;
    case 1:
        cout << "Dzien tygodnia: poniedzialek" << endl;
        break;
    case 2:
        cout << "Dzien tygodnia: wtorek" << endl;
        break;
    case 3:
        cout << "Dzien tygodnia: sroda" << endl;
        break;
    case 4:
        cout << "Dzien tygodnia: czwartek" << endl;
        break;
    case 5:
        cout << "Dzien tygodnia: piatek" << endl;
        break;
    case 6:
        cout << "Dzien tygodnia: sobota" << endl;
        break;
    }

    return 0;
}