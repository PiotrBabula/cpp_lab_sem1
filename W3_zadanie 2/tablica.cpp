#include <iostream>

using namespace std;

int main()
{
    int tab[100];
    int n;
    cout << "ile elementow? ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "tab[" << i << "]= ";
        cin >> tab[i];
    }

    cout << "\nTablica:\n";

    for (int i = 0; i < n; i++)
    {
        cout << "tab[" << i << "]=" << tab[i] << endl;
    }
    return 0;
}