#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a,b,x,n;
    string s;

    cout << "give the number: "; cin >> a;

    s = to_string(a);
    n = s.length();
    x = pow(10,n-1);
    b = a / x;

    cout << "first digit is: " << b << endl;

    return 0;
}
