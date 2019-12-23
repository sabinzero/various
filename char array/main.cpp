#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "how many elements: ";
    cin >> n;

    char a[n];

    for(int i=0; i<n; i++)
    {
        cout << "give element " << i+1 << ": ";
        cin >> a[i];
    }

    for(int i=0; i<n; i++)
    {
        cout << (char)a[i] << " " << (int)a[i] << endl;
    }

    return 0;
}
