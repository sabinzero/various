#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

int main()
{
    char a[100];
    int sum=0, x, i;

    cout << "enter a binary number: ";
    cin >> a;

    int a_len=strlen(a);
    a[a_len] = '\0';
//    cout << "a_len=" << a_len << endl;
    for(i=0; i<a_len; i++)
    {
//        cout << a[i] << endl;
        if(a[i] != '0' && a[i] != '1')
        {
            cout << "the number contains non binary characters" << endl;
            return 1;
        }
    }

    for(i=0; i<a_len; i++)
    {
        x = a[a_len-i-1]-48;
//        cout << "x[" << i << "]=" << x << " ";
        sum = sum +  x*pow(2,i);
    }

    cout << endl << "decimal: " << sum;

    return 0;
}
