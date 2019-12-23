#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a,a_t,v;

    cout << "get side: "; cin >> a;

    if (a < 0){
        cout << " it cannot be negative";
        return 7;
    }

    a_t = 6 * (pow(a,2));
    cout << "aria totala= " << a_t << endl;
    v = pow (a,3);
    cout << "volumul= " << v << endl;

    return 0;
}
