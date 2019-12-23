#include <iostream>

using namespace std;

int main()
{
    int n,fact=0,sum=0,i,j;

    cout << "enter value of n : ";
    cin >> n;

    for(i=1; i<=n; i++)
    {
        fact=1;

        for(int j=1; j<=i; j++)
        {
            fact=fact*j;
        }
        sum=sum+fact;
    }

    cout << "factorial of every individual number is : " << sum << endl;

    return 0;
}
