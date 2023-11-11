#include <iostream>
#include <cstdlib>

using namespace std;
string login, passwd;
int main()
{
    cout << "Podaj login: ";
    cin >> login;
    cout << "Podaj haslo: ";
    cin >> passwd;
    if ((login == "admin") && (passwd == "trudne"))
    {
        cout << "udalo sie zalogowac!";
    }
    else
    {
        cout << "nie udalo sie zalogowac!";
    }
    return 0;
}