#include <iostream>

using namespace std;

int main () {
    int x;
    int suma = 0;
    while (1) { // 1 - oznacza true
        cout << "x=";
        cin >> x;
        if(x < 0) {
            break;
        }
        suma += x;
    }
    cout << "suma = " << suma;
    return 0;
    }