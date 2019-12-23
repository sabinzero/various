#include <iostream>

using namespace std;

int main()
{
    const float PI = 3.1415926;

    float radius;
    float circle_len;

    cout << "get radius= ";
    cin >> radius;
    if (radius < 0) {
        cout << "radius cannot be negative";
        return 7;
    }

    circle_len = 2 * PI * radius;
    cout << "circle_length = " << circle_len << endl;

    return 0;
}
