#include <iostream>
#include <string>
using namespace std;

int main()
{
    // int to string
    int x = 23;
    cout << "int: " << x << endl;
    string str = to_string(x);
    cout << "int to string: " << str << endl;
    cout << "\n";

    // string to int
    string str2 = "5aaaa";
    cout << "string: " << str2 << endl;
    int strToInt = stoi(str2);
    cout << "string to int: " << strToInt;

    return 0;
}