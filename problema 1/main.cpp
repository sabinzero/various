#include <iostream>

using namespace std;

int main()
{
    int n=30, k=2, i=1;

    while (i<=n/4)
    {
        cout << k++ << " ";
        k=n/k + n%k;
        i=i+1;
    }

    return 0;
}
