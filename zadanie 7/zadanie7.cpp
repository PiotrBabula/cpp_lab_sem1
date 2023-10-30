#include <iostream>
//konwersja stopni Celsjusza na stopnie Fahrenheita
using namespace std;

int main()
{
    setlocale(LC_ALL,"");

    double tc, tf;
    cout << "Przeliczenie stopni Celsjusza na stopnie Fahrenheita\n\n"
            "--------------------------------------------\n\n"
            "Podaj temperaturę w stopniach Celsjusza ";

    cin >> tc;
    tf = (9 * tc) / 5 + 32;
    cout << "Temperatura w stopniach Fahrenheita: " << tf << endl << endl;

    return 0;
}
