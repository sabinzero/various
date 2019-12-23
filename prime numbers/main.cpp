#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num,x;

    cout << "enter number: ";
    cin >> num;

    x=sqrt(num);

    for(int i=2; i<=x; i++)
    {
        if(num%i==0)
        {
            cout << "number not prime" << endl;
            return 0;
        }
    }

    cout << "number is prime" << endl;

    return 0;
}
