#include <iostream>

using namespace std;

int main()
{
    int tab[10][10];
    for (int i = 1; i <= 10; ++i)
    {
        for (int j = 1; j <= 10; ++j)
        {
            tab[i][j] = i * j;
        }
    }

    for (int i = 1; i <= 10; ++i)
    {
        for (int j = 1; j <= 10; ++j)
        {
            cout << i * j << "\t";
        }
        cout << endl;
    }
    return 0;
}