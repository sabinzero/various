#include <iostream>

using namespace std;

int main()
{
    int a,b;

    cout << "first number : ";
    cin >> a;
    cout << "second number : ";
    cin >> b;

    if (a > b)
    {
        cout << a << " is bigger than " << b << endl;
    }
    else if(a < b)
    {
        cout << b << " is bigger than " << a << endl;
    }
    else
    {
        cout << a << " is equal to " << b << endl;
    }

    return 0;
}
