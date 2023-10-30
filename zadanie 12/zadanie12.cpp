#include <iostream>
#include <windows.system.h>

using namespace std;

int main()
{

    HANDLE hOut;
    hOut = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hOut, 4);
    cout << "\n---------------------------------------------------\n"
         << "--- Program obliczajacy obwod i pole prostokata ---\n"
         << "---------------------------------------------------\n";
    SetConsoleTextAttribute(hOut, 15);

    double a, b, P, Ob;

    cout << "Wprowadz bok a: " << endl;
    cin >> a;

    cout << "Wprowadz bok b: " << endl;
    cin >> b;

    P = a * b;
    Ob = 2 * (a + b);
    cout << "----------\n"
            "Pole prostokata = "
         << P << endl;
    cout << "Obwod prostokata = " << Ob << endl;
    return 0;
}