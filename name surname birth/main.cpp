#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a,b;
    int c;

    cout << "name : ";
    cin >> a;

    cout << "surname : ";
    cin >> b;

    cout << "birth year : ";
    cin >> c;

    cout << "hello " << a << b << " who is " << 2017 - c << " years old" << endl;

    return 0;
}
