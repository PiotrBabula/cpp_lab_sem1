#include <iostream>

using namespace std;

//uniformly accelerated motion

int main() {
    double s, V0, t, a;
    cout << "Droga w ruchu jednostajnie przyspieszonym\n"
            "-----------------------------------------\n"
            "V0 = ";
    cin >> V0;
    cout << "t = ";
    cin >> t;
    cout << "a = ";
    cin >> a;

    s = t * (V0 + (a * t) / 2);
    cout << "\n----------\n" "s = " << s << endl;
    return 0;
}