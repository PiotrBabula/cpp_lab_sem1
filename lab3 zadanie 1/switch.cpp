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
        id = 31;

        break;
    case 2:
    {
        if (rok % 4 == 0 && rok % 100 != 0 || rok % 400 == 0)
        {
            id = 28;
            break;
        }
        else
        {
            id = 28;
            break;
        }
    }
    case 3:
        id = 31;
        break;
    case 4:
        id = 30;
        break;
    case 5:
        id = 31;
        break;
    case 6:
        id = 30;
        break;
    case 7:
        id = 31;
        break;
    case 8:
        id = 31;
        break;
    case 9:
        id = 31;
        break;
    case 10:
        id = 31;
        break;
    case 11:
        id = 30;
        break;
    case 12:
        id = 31;
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