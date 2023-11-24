#include <iostream>

using namespace std;

int main()
{
    int miesiac, rok, id;
    cout << "wpisz rok" << endl;
    cin >> rok;

    cout << "wpisz miesiac" << endl;
    cin >> miesiac;

    switch (miesiac)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        id = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        id = 30;
        break;
    case 2:
        if (rok % 4 == 0 && rok % 100 != 0 || rok % 400 == 0)
        {
            id = 29;
        }
        else
        {
            id = 28;
        }
        break;
    default:
        id = -1;
    }
    if (id == -1)
    {
        cout << "niepoprawny numer miesiaca";
    }
    else
    {
        cout << "miesiac ma " << id << " dni.";
    }
    return 0;
}