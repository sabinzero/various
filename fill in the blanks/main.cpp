#include <iostream>

using namespace std;

int main()
{
    int a=5,b=4;
    char c='d';

    c += b;

    cout << ++c << b++ << endl;

    {

        int a=2;

        b += a;

        cout << ++b << ++a << c <<endl;
    }
    cout << a++ << b++ << c++ << endl;
    cout << ++a << ++c << ++b << endl;
    c -= -3;
    cout << ++b << ++c << ++a <<endl;

    return 0;
}
