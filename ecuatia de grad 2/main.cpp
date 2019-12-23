#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a,b,c;
    float x1,x2,d;

    cout << "enter quadratic equation factors: " << endl;
    cin >> a >> b >> c;

    d=pow(b,2)-4*a*c;

    if(d<0)
    {
        cout << "answer is complex number" << endl;
    }
    else
    {
        x1 = (-b + sqrt(d)) / (2*a);
        x2 = (-b - sqrt(d)) / (2*a);

        cout << "answer is " << x1 << " and " << x2 << endl;
    }

    return 0;
}
