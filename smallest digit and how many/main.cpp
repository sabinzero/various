#include <iostream>

using namespace std;

int main()
{
    int a,i=0,b,c,d;

    cout << "enter number: ";
    cin >> a;

    while(a!=0)
    {
        a=a/10;
        i++;
    }

    cout << "the number has " << i << " digits" << endl;

    b=a%10;
    c=b;

    if(b<=c)
    {
        d=b;
    }

    a=a/10;

    while(a!=0)
    {
        b=a%10;
        c=b;
        a=a/10;

        if(b<=d && b!=0)
        {
            d=b;
        }
    }

    cout << "smallest digit is: " << d << endl;

    return 0;
}
