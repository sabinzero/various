#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    const float PI=3.1415926;
    float r,h,ab,al,v;

    cout << "da-mi raza: "; cin >> r;
    cout << "da-mi inaltime: "; cin >> h;

    if (r <= 0 || h <= 0){
        cout << "numarul nu poate fi negativ sau nul";
        return 7;
    }

    ab = PI * r * r;
    cout << "aria bazei= " << ab << endl;
    al = 2 * PI * r * h;
    cout << "aria laterala= " << al << endl;
    v = PI * r * r * h;
    cout << "volumul= " << v << endl;





    return 0;
}
