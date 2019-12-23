#include <iostream>

using namespace std;

int main()
{
    char a;

    cout << "enter a key: ";
    cin >> a;

    if ((a>='a') && (a<='z') || (a>='A') && (a<='Z'))
    {
        cout << a << " is a letter";
    }
    else
    {
        if((a>='1') && (a<='9'))
        {
            cout << a << " is a digit";
        }
        else
        {
            if ((a=='.') || (a==',') || (a=='?') || (a=='!'))
            {
                cout << a << " is a punctuation";
            }
            else
            {
                cout << a << " is a special key";
            }
        }
    }


    return 0;
}
