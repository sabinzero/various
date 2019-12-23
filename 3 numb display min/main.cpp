#include <iostream>

using namespace std;

int main()
{
    int a,b,c;

    cout << "enter numbers: ";
    cin >> a >> b >> c;

    if(a<b && a<c)
    {
        cout << a << " is min";
    }
    else
    {
        if(b<a && b<c)
        {
            cout << b << " is min";
        }
        else
        {
            if(c<a && c<b)
            {
                cout << c << " is min";
            }
        }
    }


    return 0;
}
