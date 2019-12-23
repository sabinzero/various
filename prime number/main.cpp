#include <iostream>
#include <math.h>


using namespace std;

int main()
{
    int n,sr,i=2,r,c=0;

    cout << "enter a number : ";
    cin >> n;

    sr=sqrt (n);

    while (i<=sr) {
        r=n%i;

        if(r==0) {
            c=1;
            cout << i << endl;
        }
        i++;
    }

    if (c==0) {
        cout << n << " is a prime number" << endl;
    }
    else {
        cout << n << " is not a prime number" << endl;
    }


    return 0;
}
