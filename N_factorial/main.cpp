#include <iostream>

using namespace std;

int main()
{
    int n,fac=1;

    cout << "factorial of : ";
    cin >> n;

    for (int i=1; i<=n; i++)
    {
        fac=fac*i;
    }

    cout << "factorial of " << n << " is : " << fac << endl;

    return 0;
}
