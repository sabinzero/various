#include <iostream>

using namespace std;

int main()
{
    char a;
    int c=0;

    for(int i=0; i<6; i++)
    {

        cout << "enter a key: ";
        cin >> a;

        if(a>='0' && a<='9')
        {
            c++;
        }
    }

    cout << c;

    return 0;
}
