#include <iostream>

using namespace std;

int main()
{
    int a,b;

    cout << "a= ";
    cin >> a;

    cout << "b= ";
    cin >> b;

    if(a>b)
    {
        cout << a << " is bigger" << endl;
    }
    else
    {
        cout << b << " is bigger" << endl;
    }

    return 0;
}
