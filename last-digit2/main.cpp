#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a,f;
    float n,x;

    cout << "get number: "; cin >> a;

    n = a/10.0;
    cout << "n= " << n << endl;
    f=(int)n;
    cout << "f= " << f << endl;
    x=ceil((n-f)*10);

    cout << "x= " << x << endl;

    return 0;
}
