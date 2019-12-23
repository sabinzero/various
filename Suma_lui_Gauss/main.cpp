#include <iostream>

using namespace std;

int main()
{
    int n,sg=0;

    cout << "enter last number : ";
    cin >> n;

    for(int i=1; i<=n; i++)
    {
        sg=sg+i;
    }

    cout << "sum of numbers from 1 to " << n << " is : " << sg << endl;


    return 0;
}
