#include <iostream>

using namespace std;

int main()
{
    unsigned int a,b;
    float ma;

    cout << "get a: "; cin >> a;
    cout << "get b: "; cin >> b;

    if ( a < 10 || b < 10 || 99 < a || 99 < b) {
        cout << "the number can have only two digits";
        return 7;
    }

    ma =(float)(a + b)/ 2;

    cout << "media aritmetica= " << ma;

    return 0;
}
