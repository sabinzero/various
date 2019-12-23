#include <iostream>

using namespace std;

int main()
{
    char a;

    cout << "enter a key: ";
    cin >> a;

    if(a>='a' && a<='z' || a>='A' && a<='Z')
    {
        cout << "its letter";
    }
    else
    {
        if(a>='0' && a<='9')
        {
            cout << "its digit";
        }
        else
        {
            if(a=='.' || a=='?' || a==',' || a=='!')
            {
                cout << "its punctuation";
            }
            else
            {
                cout << "its special character";
            }
        }
    }




    return 0;
}
