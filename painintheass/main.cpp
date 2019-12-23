#include <iostream>

using namespace std;

int fact (int k) {
    int factorial=1;

    for(int j=1; j<=k; j++)
    {
        factorial=factorial*j;
    }
    return factorial;
}

int main()
{
    int n,sum=0;

    cout << "enter value of n : ";
    cin >> n;

    for(int i=1; i<=n; i++)
    {
        sum=sum+fact(i);
    }

    cout << "factorial of every individual number is : " << sum << endl;

    return 0;
}
