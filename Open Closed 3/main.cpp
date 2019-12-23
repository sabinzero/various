#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "enter number : ";
    cin >> a;

    switch (a)
    {
        case 1: cout << "OPEN" << endl;
        break;
        case 0: cout << "CLOSED" << endl;
        break;
        default: cout << "";
    }

    return 0;
}
