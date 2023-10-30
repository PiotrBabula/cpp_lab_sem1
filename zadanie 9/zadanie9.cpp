#include <iostream>

using namespace std;

//enum

int main() {
    enum Dni {Niedziela, Poniedzialek, Wtorek, Sroda, Czwartek, Piatek, Sobota};
    Dni dzisiaj;
    dzisiaj = Sobota;
    if(dzisiaj == Sroda || dzisiaj == Niedziela) {
        cout << "\nUwielbiam weekendy!\n";

    } else {
        cout << "\nWracaj do pracy!\n";
    }
    return 0;
}