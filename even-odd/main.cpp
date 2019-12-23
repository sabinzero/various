#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a,r;

    cout << "enter number: ";
    cin >> a;

    r=a%2;

    if(r==0)
    {
        cout << " " << a << " is even" << endl;
    }
    else
    {
        cout << " " << a << " is odd" << endl;
    }

    return 0;
}
