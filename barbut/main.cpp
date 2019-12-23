#include <iostream>
#include <ctime>
#include <cstdlib>
#include <conio.h>
#include <windows.h>
#include <string>


using namespace std;

int dice();
int main()
{
    string p1,p2;
    int a,b,s1,s2;

    cout << "Enter player 1: ";
    cin >> p1;

    cout << "Enter player 2: ";
    cin >> p2;

    cout << p1 << " rolled the dice and got " << endl;
    a=dice();
    b=dice();
    s1=a+b;
    cout << a << " and " << b << endl;

    cout << p2 << " rolled the dice and got " << endl;
    a=dice();
    b=dice();
    s2=a+b;
    cout << a << " and " << b << endl;

    if(s1>s2)
    {
        cout << p1 << " wins" << endl;
    }
    else
    {
        if(s2>s1)
        {
            cout << p2 << " wins" << endl;
        }
        else
        {
            cout << "Its a draw";
        }
    }

    return 0;
}
int dice()
{
    srand(time(NULL));
    Sleep(1000);
    return rand() % 6 + 1;
}
