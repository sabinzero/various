#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "introdu numarul: ";
    cin >> a;

    if(a<0)
    {
        cout << a << " nu este pozitiv" <<endl;
    }
    else
    {
        cout << a << " este pozitiv" <<endl;
    }

    return 0;
}
