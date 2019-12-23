#include <iostream>

using namespace std;

int main()
{
    int a,b, max;

    cout << "first number : ";
    cin >> a;
    cout << "second number : ";
    cin >> b;

    max = (a >= b) ? a : b;

    cout << "The biggest is: " << max << endl;

    return 0;
}
