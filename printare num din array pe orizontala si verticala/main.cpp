#include <iostream>

using namespace std;

int main()
{
    int n,num;

    cout << "how many elements: ";
    cin >> n;

    int a[n];

    for(int i=0; i<n; i++)
    {
        cout << "give number " << i+1 << ": ";
        cin >> a[i];
    }

    for(int i=0; i<n; i++)
    {
        cout << a[i] << " " ;
    }

    cout << endl;

    for(int i=0; i<n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}
