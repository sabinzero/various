#include <iostream>

using namespace std;

int main()
{
    int r,p=3,D,A,C;

    cout << "give radius= ";
    cin >> r;

    D=2*r;
    cout << "diameter of the circle= " << D << endl;
    A=p*r*r;
    cout << "area of the circle= " << A << endl;
    C=2*p*r;
    cout << "circumference of the circle= " << C << endl;


    return 0;
}
