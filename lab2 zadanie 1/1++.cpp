#include <iostream>
#include <cstdlib>
using namespace std;
// roznica post i pre
int main()
{
    // int a = 125, b = 30, c, d;
    // c = ++a;
    // d = --b;
    // cout << a << " " << b << " " << c << " " << d << endl;
    // system("pause");
    int a = 125, b = 30, c, d;
    c = a++;
    d = b++;
    cout << a << " " << b << " " << c << " " << d << endl;
    system("pause");

    return 0;
}