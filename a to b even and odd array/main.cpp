#include <iostream>

using namespace std;

int main()
{
    int a,b,even[100],odd[100],k=0,j=0;

    cout << "enter number a: ";
    cin >> a;

    cout << "enter number b: ";
    cin >> b;

    if(a<b)
    {
        for(int i=a; i<=b; i++)
        {
            if(i%2==0)
                even[k++]=i;
            else
                odd[j++]=i;
        }
    }
    else
    {
        for(int i=a; i>=b; i--)
        {
            if(i%2==0)
                even[k++]=i;
            else
                odd[j++]=i;
        }
    }

    cout << "even numbers: ";
    for(int i=0; i<k; i++)
        cout << even[i] << " ";

    cout << endl;

    cout << "odd numbers: ";
    for(int i=0; i<j; i++)
        cout << odd[i] << " ";
    cout << endl;

    return 0;
}
