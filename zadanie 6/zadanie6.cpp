#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;
//sterowanie strumieniem wyjściowym

int main()
{
    cout << setprecision(2) << fixed << 2.3 << " " << "\n";
    cout << setw(2) << setfill('0') << 173 << endl;
    return 0;
}

