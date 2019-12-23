#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n,x,y;

    cout << "enter a number: ";
    cin >> n;

    x=y=sqrt(n);

    for(int i=0; i<=x; i++)
    {
        for(int j=y; j>=0; j--)
        {
            if(i*i+j*j==n)
            {
                cout << i << "^2 + " << j << "^2 = " << n << endl;
                return 0;
            }
        }
    }

    cout << "no numbers could satisfy the formula" << endl;

    return 0;
}
