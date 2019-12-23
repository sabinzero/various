#include <iostream>

using namespace std;

int main()
{
    unsigned int n,a,b,nn=0;

    cout << "enter a number : ";
    cin >> n;
    cout << sizeof(n) << endl;
    a=n;

    while(a>0)
    {
        b=a%10;
        a=a/10;
        nn=nn*10+b;
    }

    cout << "the reverse of " << n << " is " << nn << endl;

    return 0;
}
