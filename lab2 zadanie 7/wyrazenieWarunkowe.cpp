#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b = 4, c = 2;

    //wyrazenie warunkowe: zmienna=(warunek)?wartość1: wartośc2;
    a = (b > c) ? a = 12: a = 120;
    cout << "a = " << a << endl;
    
    // if(b < c) {
    //     a = 12;
    //     cout << "a = " << a << endl;

    // } else {
    //     a = 120;
    //     cout << "a = " << a << endl;

    // }
    return 0;



}