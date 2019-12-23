#include <iostream>
#include <math.h>


using namespace std;

int main()
{
    int a,c;
    float b,d,e;

    cout << "give the number: "; cin >> a;

    b = (float)a / 10;
    cout << "b is: " << b << endl;
    c = (int)b;
    cout << "c is: " << c << endl;
    d = b - c;
    cout << "d is: " << d << endl;
    e = d * 10;
    cout << "e is: " << e << endl;


    return 0;
}
