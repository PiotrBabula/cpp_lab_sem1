
#include <iostream>
#include <windows.system.h>

using namespace std;

int main()
{

    const double TAX_BELOW_120K = 0.12, TAX_ABOVE_120K = 0.32, TAX_ABOVE_1M = 0.04, TAX_ALLOWANCE = 3600;
    double grossIncome, tax, taxBelow120k, grossIncomeAbove120k, taxAbove120k, grossIncomeAbove1m, taxAbove1m;

    // header
    HANDLE hOut;
    hOut = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hOut, 4);
    cout << "\n-------------------------------------------------------\n"
         << "-- Program obliczajacy podatek dochodowy za 2022 rok --\n"
         << "-------------------------------------------------------\n";
    SetConsoleTextAttribute(hOut, 15);

    cout << "Wpisz dochod za 2022 rok w PLN:" << endl;
    do
    {
        cin >> grossIncome;
        // podatek ponizej 0 PLN
        if (grossIncome < 0)
        {
            cout << "Wpisz dochod wiekszy od 0 w PLN:" << endl;
            continue;
        }
        // podatek ponizej 30 000 PLN
        else if (grossIncome <= 30000)
        {
            cout << "---------------------" << endl;
            cout << "Twoj dochod nie przekroczyl kwoty wolnej - 30 000PLN.\n"
                    "Podatek wynosi 0zl."
                 << endl;
            return 0;
        }
        // podatek 30k - 120k
        else if (grossIncome > 30000 && grossIncome <= 120000)
        {
            tax = (grossIncome * TAX_BELOW_120K) - TAX_ALLOWANCE;
            cout << "---------------------" << endl;
            cout << "Twoj Podatek wynosi " << tax << " PLN." << endl;
            return 0;
        }
        // podatek 120k - 1M
        else if (grossIncome > 120000 && grossIncome <= 1000000)
        {
            taxBelow120k = (120000 * TAX_BELOW_120K) - TAX_ALLOWANCE;
            grossIncomeAbove120k = grossIncome - 120000;
            taxAbove120k = grossIncomeAbove120k * TAX_ABOVE_120K;
            tax = taxBelow120k + taxAbove120k;
            cout << "---------------------" << endl;
            cout << "Twoj Podatek wynosi " << tax << " PLN." << endl;
            return 0;
        }
        // podatek powyzej 1M
        else
        {
            taxBelow120k = (120000 * TAX_BELOW_120K) - TAX_ALLOWANCE;
            taxAbove120k = (880000 * TAX_ABOVE_120K);
            grossIncomeAbove1m = grossIncome - 1000000;
            taxAbove1m = grossIncomeAbove1m * (TAX_ABOVE_120K + TAX_ABOVE_1M);
            tax = taxBelow120k + taxAbove120k + taxAbove1m;
            cout << "---------------------" << endl;
            cout << "Twoj Podatek wynosi " << tax << " PLN." << endl;
            return 0;
        }
    } while (true);
}