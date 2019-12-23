#include <iostream>

using namespace std;

int main()
{
    int code;

    cout << "give a integer (between 0 and 127) = ";
    cin >> code;

    while(code < 0 || 127 < code)
    {
        cout <<"please try again";
        cin >> code;
    }

    cout << "for " << code << " its " << char(code) << endl;

    return 0;
}
