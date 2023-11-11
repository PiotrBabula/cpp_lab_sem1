#include <iostream>
#include <cstdlib>

using namespace std;
string PIN;
int main()
{
    cout << "witaj w naszym banku!" << endl;
    cout << "Podaj numer PIN" << endl;
    cin >> PIN;
    if (PIN == "1729")
    {
        cout << "poprawny PIN" << endl;
    }
    else
    {
        cout << "niepoprawny PIN" << endl;
    }

    return 0;
}