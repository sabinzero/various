#include <iostream>

using namespace std;

int main()
{
    int a,b,c,S,P;
    float A;

    cout << "enter first number: ";
    cin >> a;
    cout << "enter second number: ";
    cin >> b;
    cout << "enter third number: ";
    cin >> c;

    S=a+b+c;
    cout << "sum of the numbers= " << S << endl;
    P=a*b*c;
    cout << "product of the numbers= " << P << endl;
    A=(a+b+c)/3;
    cout << "average of the numbers= " << A << endl;

    return 0;
}
