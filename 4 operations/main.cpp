#include <iostream>
#include <math>

using namespace std;

int main()
{
    int a,b,sum,dif,prod,div;

    cout << "enter numbers : " << endl;

    cin >> a;
    cin >> b;

    sum=a+b;
    cout << "sum of " << a << " and " << b << " is " << sum << endl;
    dif=a-b;
    cout << "difference of " << a << " and " << b << " is " << dif << endl;
    prod=a*b;
    cout << "product of " << a << " and " << b << " is " << prod << endl;
    div=a/b;
    cout << "division of " << a << " and " << b << " is " << div << endl;

    return 0;
}
