#include <iostream>

using namespace std;

int main()
{
    int n,m,i=1;

    cout << "value of N : ";
    cin >> n;

    cout << "from " << n << " to 1 by : ";
    cin >> m;

    while(n>=i)
    {
        cout << n << endl;
        n=n-m;
    }

    return 0;
}
