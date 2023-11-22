#include <iostream>

using namespace std;

int main()
{
    int tab[10] = {0};
    int n;
    cout << "ile elementow? " << endl;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cout << "wpisz tab[" << i << "]=";
        cin >> tab[i];
    }

    cout << endl;

    for (int i = 0; i < 10; ++i)
    {
        cout << "tab[" << i << "]= " << tab[i] << endl;
    }
    return 0;
}