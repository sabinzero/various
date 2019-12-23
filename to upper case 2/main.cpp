#include <iostream>
#include <string>

using namespace std;

int main()
{
    char low_letter, high_letter;

    cout << "give letter to uppercase: ";
    cin >> low_letter;

    high_letter = toupper(low_letter);

    cout << "the upper of " << low_letter << " is " << high_letter;

    return 0;
}
