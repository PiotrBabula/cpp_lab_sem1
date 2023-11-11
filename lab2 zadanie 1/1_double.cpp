#include <iostream>
using namespace std;
// roznica post i pre
int main()
{
    int preA = 125, preB = 30, postA = 125, postB = 30, c, d, e, f;

    cout << "a = " << preA << endl;
    cout << "b = " << preB << endl;

    c = ++preA;
    d = --preB;
    cout << "++a = " << c << endl;
    cout << "--b = " << d << endl;

    cout << "a = " << postA << endl;
    cout << "b = " << postB << endl;

    e = postA++;
    f = postB--;
    cout << "a++ = " << e << endl;
    cout << "b-- = " << f << endl;

    system("pause");

    return 0;
}