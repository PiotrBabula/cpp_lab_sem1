#include <iostream>
#include <cstdlib>

int wiek;
using namespace std;

int main()
{
    cout << "ile masz lat?";
    cin >> wiek;
    if (wiek < 18)
        cout << "nie jestes pelnoletni i nie mozesz zostac prezydentem";
    else if ((wiek >= 18) && (wiek < 35))
        //((wiek >= 18) && (wiek < 35)) -> wiek < 35 i tez bedzie dzialac
        cout << "jestes pelnoletni i nie mozesz zostac prezydentem";
    else
        cout << "jestes pelnoletni i mozesz zostac prezydentem";

    return 0;
}