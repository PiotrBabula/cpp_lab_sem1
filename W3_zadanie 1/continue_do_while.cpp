#include <iostream>

using namespace std;

int main()
{
    int ile = 0, suma = 0, x;
    do
    {
        cout << "x(" << ile + 1 << ")=";
        cin >> x;

        if (x < 0)
        {
            continue;
        }

        suma = suma + x;
        ile++;
    } while (ile < 5);
    cout << "suma=" << suma;
    return 0;
}