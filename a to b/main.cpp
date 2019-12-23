#include <iostream>

using namespace std;

int main()
{
    int a,b;

    cout << "enter number a: ";
    cin >> a;

    cout << "enter number b: ";
    cin >> b;

    if(a<b)
    {
        for(int i=a; i<=b; i++)
        {
            cout << i << endl;
        }
    }
    else
    {
        for(int i=a; i>=b; i--)
        {
            cout << i << endl;
        }
    }

    return 0;
}
