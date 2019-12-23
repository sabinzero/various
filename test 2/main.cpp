#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    unsigned int a,b;
    float mg;

    cout << "get a: "; cin >> a;
    cout << "get b: "; cin >> b;

    if (a < 0 || a > 99 || b < 0 ||b > 99){
        cout << "the number cannot be negative or 3 digit long";
        return 7;
    }

    mg = sqrt((float)a * (float)b);

    cout << "media geometrica= " << mg;


    return 0;
}
