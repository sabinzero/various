#include <iostream>

using namespace std;

int main()
{
    int num,sq;

    cout << "enter number : ";
    cin >> num;

    if (num != 0)
    {
        sq=num*num;
        cout << "square of " << num << " is " << sq << endl;
    }
    else
    {
        cout << "number cannot be zero" << endl;
    }

    return 0;
}
