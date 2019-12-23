#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, n, f;
    float x;

    cout << "get a: "; cin >> a;
    x = (float)a / 10;
    n = (int)x;
    f = floor((x - (float)n) * 10.0);
    cout << "x = " << x << endl;
    cout << "n = " << n << endl;
    cout << "x-n = " << x-n << endl;
    cout << "f = " << f << endl;

    cin.get(); cin.get();
    return 0;
}
