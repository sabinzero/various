#include <iostream>

using namespace std;

int main()
{
    int a;
    string s,s1;

    cout << "give a: "; cin >> a;

    s = to_string(a);
    s1 = s[0];

    cout << "first digit: " << s1 << endl;

    return 0;
}
