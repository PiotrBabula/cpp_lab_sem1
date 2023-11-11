#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    cout << "PI wynosi: " << M_PI << endl;
    cout << "zaokraglenie 2.1 wynosi: " << round(2.1) << endl;
    cout << "zaokraglenie 2.5 wynosi: " << round(2.5) << endl;
    cout << "zaokraglenie 2.8 wynosi: " << round(2.8) << endl;
    cout << "zaokraglenie 2.1 w gore wynosi: " << ceil(2.1) << endl;
    cout << "zaokraglenie 2.5 w gore wynosi: " << ceil(2.5) << endl;
    cout << "zaokraglenie 2.8 w gore wynosi: " << ceil(2.8) << endl;
    cout << "zaokraglenie 2.1 w dol wynosi: " << floor(2.1) << endl;
    cout << "zaokraglenie 2.5 w dol wynosi: " << floor(2.5) << endl;
    cout << "zaokraglenie 2.8 w dol wynosi: " << floor(2.8) << endl;
    cout << "sinus 30st. wynosi: " << sin(30 * M_PI / 180) << endl;
    cout << "cosinus 30st. wynosi: " << cos(30 * M_PI / 180) << endl;
    cout << "tangens 30st. wynosi: " << tan(30 * M_PI / 180) << endl;
    cout << "2 do potegi 20 wynosi: " << fixed << pow(2, 20) << endl;
    cout << "pierwiastek kwadratowy z 144 wynosi: " << sqrt(144) << endl;
    cout << "logarytm naturalny ln z e wynosi: " << log(M_E) << endl;
    cout << "logarytm przy podstawie 10 z 100 wynosi: " << log10(100) << endl;
    cout << "logarytm przy podstawie 2 z 128 wynosi: " << log2(128) << endl;
    cout << "modul -2.1 wynosi: " << abs(-2.1) << endl;
    return 0;
}