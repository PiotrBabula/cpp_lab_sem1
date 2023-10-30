#include <iostream>
#include <windows.system.h>

using namespace std;

int main()
{
    HANDLE hOut;
    hOut = GetStdHandle ( STD_OUTPUT_HANDLE);

//    for loop with all colors
//    for (int i = 0; i <= 255; ++i) {
//        SetConsoleTextAttribute(hOut, i);
//        cout << i << " color" << endl;
//    }

    //first image
    cout << "...First image..." << endl;
    SetConsoleTextAttribute(hOut, 4);
    cout << "XXXXXXXXXX" << endl;
    SetConsoleTextAttribute(hOut, 0010);
    cout << "X........X" << endl;
    cout << "X.X......X" << endl;
    cout << "X.XX.....X" << endl;
    cout << "X.XXX....X" << endl;
    cout << "X.XXXX...X" << endl;
    cout << "X.XXXXX..X" << endl;
    cout << "X.XXXXXX.X" << endl;
    cout << "X........X" << endl;
    SetConsoleTextAttribute(hOut, 4);
    cout << "XXXXXXXXXX" << endl;

    cout << "\n";

    //second image
    SetConsoleTextAttribute(hOut, 7);
    cout << "...Second image..." << endl;
    //first line
    SetConsoleTextAttribute(hOut, 4);
    cout << "X";
    SetConsoleTextAttribute(hOut, 10);
    cout << "XXXXXXXX";
    SetConsoleTextAttribute(hOut, 4);
    cout << "X" << endl;

    //second line
    cout << "X";
    SetConsoleTextAttribute(hOut, 10);
    cout << "........";
    SetConsoleTextAttribute(hOut, 4);
    cout << "X" << endl;

    //third line
    cout << "X";
    SetConsoleTextAttribute(hOut, 10);
    cout << ".X.X.X..";
    SetConsoleTextAttribute(hOut, 4);
    cout << "X" << endl;

    //fourth line
    cout << "X";
    SetConsoleTextAttribute(hOut, 10);
    cout << "..X.X.X.";
    SetConsoleTextAttribute(hOut, 4);
    cout << "X" << endl;

    //fifth line
    SetConsoleTextAttribute(hOut, 9);
    cout << "X";
    SetConsoleTextAttribute(hOut, 15);
    cout << "..X.X.X.";
    SetConsoleTextAttribute(hOut, 9);
    cout << "X" << endl;

    //sixth line
    SetConsoleTextAttribute(hOut, 9);
    cout << "X";
    SetConsoleTextAttribute(hOut, 15);
    cout << ".X.X.X..";
    SetConsoleTextAttribute(hOut, 9);
    cout << "X" << endl;

    //seventh line
    SetConsoleTextAttribute(hOut, 9);
    cout << "X";
    SetConsoleTextAttribute(hOut, 15);
    cout << "..X.X.X.";
    SetConsoleTextAttribute(hOut, 9);
    cout << "X" << endl;

    //eighth line
    SetConsoleTextAttribute(hOut, 9);
    cout << "X";
    SetConsoleTextAttribute(hOut, 2);
    cout << ".X.X.X..";
    SetConsoleTextAttribute(hOut, 9);
    cout << "X" << endl;

    //ninth line
    SetConsoleTextAttribute(hOut, 9);
    cout << "X";
    SetConsoleTextAttribute(hOut, 2);
    cout << "........";
    SetConsoleTextAttribute(hOut, 9);
    cout << "X" << endl;

    //tenth line
    cout << "XXXXXXXXXX" << endl;
    return 0;

}