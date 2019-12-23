#include <iostream>

using namespace std;

int main()
{
    char a;

    cout << "enter letter: ";
    cin >> a;

    if(a>='a' && a<='z')
    {
        cout << a << " is letter";
    }
    else
    {
        if(a>='A' && a<='Z')
        {
            cout << a << " is letter";
        }
        else
        {
            cout << a << " isnt letter";
        }
    }

    return 0;
}
