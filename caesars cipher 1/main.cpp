#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char a[100],c;

    cout << "enter message: ";
    gets(a);

    int len=strlen(a);

    cout << "encrypted message: ";

    for(int i=0; i<len; i++)
    {
        c=a[i]+3;
        cout << c;
    }

    return 0;
}
