#include <iostream>

using namespace std;

int main()
{
    int a,r,s,d;

    cout << "enter number: ";
    cin >> a;

    if (a<10 || a>99) {
        cout << "number must have 2 digits" << endl;
        return -1;
    } else {
        r = a%2;
        if (r==0) {
            s = a/10 + a%10;
            cout << "sum of digits is: " << s << endl;
        } else {
            d = a/10 - a%10;
            cout << "difference of digits is: " << d << endl;
        }
    }
    return 0;
}
