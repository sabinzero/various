#include <iostream>

using namespace std;

int main()
{
    int a=1,b=2;

    a=a+b;
    b=a-b;
    a=a-b;

    cout << "a= " << a << endl;
    cout << "b= " << b << endl;


    return 0;
}
