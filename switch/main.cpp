#include <iostream>

using namespace std;

int main()
{
    int a,c;
    char b;

    cin >> a >> b >> c;

    switch(b) {
        case '+' :
            cout << a << b << c << "=" << a+c;
            break;
        case '-' :
            cout << a << b << c << "=" << a-c;
            break;
        case '*' :
            cout << a << b << c << "=" << a*c;
            break;
        case '/' :
            cout << a << b << c << "=" << a/c;
            break;
        case '%' :
            cout << a << b << c << "=" << a%c;
            break;
        default :
            cout << "not a valid operator";
    }

    return 0;
}
