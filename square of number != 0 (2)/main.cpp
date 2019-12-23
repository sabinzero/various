#include <iostream>

using namespace std;

int main()
{

    int num;

    cout << "enter number : ";
    cin >> num;

    (num != 0) ? (cout << "square of " << num << " is " << num*num) : (cout << "number cannot be zero");

    return 0;
}
