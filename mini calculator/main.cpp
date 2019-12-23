#include <iostream>

using namespace std;

int main()
{
    int a,c;
    char b;

    cout << "enter a number: ";
    cin >> a;

    cout << "enter a operator: ";
    cin >> b;

    cout << "enter a number: ";
    cin >> c;

    if(b=='+')
        cout << a << "+" << c << "=" << a+c;
    else
        if(b=='-')
            cout << a << "-" << c << "=" << a-c;
        else
            if(b=='*')
                cout << a << "*" << c << "=" << a*c;
            else
                if(b=='/')
                    cout << a << "/" << c << "=" << a/c;
                else
                    if(b=='%')
                        cout << a << "%" << c << "=" << a%c;
                    else
                        cout << "not valid operator";
    return 0;
}
