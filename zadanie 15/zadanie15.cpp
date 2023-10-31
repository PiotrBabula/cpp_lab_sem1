#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "Wpisz a: " << endl;
    cin >> a;
    cout << "Wpisz b: " << endl;
    cin >> b;
    
    if (a > b)
    {
        cout << "a > b";
    }
    else if (a == b)
    {
        cout << "a = b";
    }
    else
    {
        cout << "a < b";
    }
    return 0;
}