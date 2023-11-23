#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    // pseudolosowosc na podstawie czssu
    srand(time(NULL));

    bool powt = false;
    int tab[6];
    int i = 0, x;

    do
    {
        powt = false;

        // okreslenie zakresu 1-49
        x = rand() % 48 + 1;

        // poszukiwanie powtorzen i usuwanie ich
        for (int j = 0; j < i; j++)
        {
            if (x == tab[j])
            {
                powt = true;
            }
        }
        if (powt == true)
        {
            continue;
        }
        tab[i] = x;
        i++;
    } while (i < 6);

    // drukowanie wyniku w konsoli
    for (int j = 0; j < 6; j++)
    {
        cout << tab[j] << " ";
    }
    return 0;
}