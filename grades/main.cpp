#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "enter number : ";
    cin >> num;

    if (91 <= num && num <= 100)
    {
        cout << "A" << endl;
    }
    else if (81 <= num && num <= 90)
    {
        cout << "B" << endl;
    }
    else if (71 <= num && num <= 80)
    {
        cout << "C" << endl;
    }
    else if (61 <= num && num <= 70)
    {
        cout << "D" << endl;
    }
    else if (51 <= num && num <= 60)
    {
        cout << "E" << endl;
    }
    else if (0 <= num && num <= 50)
    {
        cout << "F" << endl;
    }
    else
    {
        cout << "";
    }

    return 0;
}
