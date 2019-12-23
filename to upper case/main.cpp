#include <iostream>

using namespace std;

int main()
{
    char low_letter,high_letter;

    cout << "give letter to upper case it: ";
    cin >> low_letter;

    high_letter= low_letter-32;

    cout << "the upper of " << low_letter << " is " << high_letter;

    return 0;
}
