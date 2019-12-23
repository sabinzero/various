#include <iostream>

using namespace std;

int main()
{
    int a,b;

    cout << "give a: "; cin >> a;

    b = a;
    while (b > 9) {
        b = b / 10;
    }

    cout << "first digit is: " << b << endl;

    return 0;
}
