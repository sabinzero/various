#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "enter number : ";
    cin >> a;

    (a == 1) ? (cout << "OPEN" << endl) : ((a == 0) ? (cout << "CLOSED" << endl) : (cout << ""))  ;

    return 0;
}
