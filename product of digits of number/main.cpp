#include <iostream>

using namespace std;

int main()
{
    int a,p;

    cout << "number= ";
    cin >> a;

    p=(a/100)*((a/10)%10)*(a%10);

    if(a<100 && a>999)
    {
        cout << "number must be three digits long";
    }
    else
    {
        cout << "p= " << p << endl;
    }

    return 0;
}
