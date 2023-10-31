#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    float delta, x1, x2;

    cout << "Wpisz a: " << endl;
    cin >> a;
    cout << "Wpisz b: " << endl;
    cin >> b;
    cout << "Wpisz c: " << endl;
    cin >> c;

    delta = (b * b) - (4 * a * c);

    if (delta >= 0)
    {
        x1 = (-b - sqrt(delta) / (2 * a));
        x2 = (-b + sqrt(delta) / (2 * a));
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else
    {
        cout << "brak rozwiazan.";
    }
    return 0;
}