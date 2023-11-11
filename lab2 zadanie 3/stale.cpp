#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
//Sposób 1: za pomocą dyrektywy #define
//Składnia: #define nazwastałej wartość
#define x 3;
#define Y "Tekst";
#define PI 3.14159265359;
#define LICZBA_TABORETOW_NA_STANOWISKO 7;
#define LICZBA_STANOWISK 7;
#define LICZBA_TABORETOW_LACZNIE = LICZBA_TABORETOW_NA_STANOWISKO * LICZBA_STANOWISK;
#define ZNAK = 't';

//Sposób 2: za pomocą modyfikatora const
//Składnia: const typ_danych nazwastałej=wartość;
    const int X = 3;
    const string Z = "Tekst";
    const double PI_2 = 3.14159265359;
    const short LICZBA_TABORETOW_NA_STAN_1 = 4;
    const short LICZBA_STANOWISK_1 = 7;
    const short LICZBATABORETOW = LICZBA_TABORETOW_NA_STAN_1 * LICZBA_STANOWISK_1;
    const char ZNAK_1 = 'e';

    return 0;
}