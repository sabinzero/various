#include <iostream>
#include <math.h>

using namespace std;

int triunghi(int a,int b,int c)
{
    if(a+b>c && b+c>a && a+c>b && a>0 && b>0 && c>0)
    {
        if(a==b && b==c)
            return 3;
        if(a==b || b==c || c==a)
            return 2;
        if(pow(a,2)+pow(b,2)==pow(c,2) ||
           pow(b,2)+pow(c,2)==pow(a,2) ||
           pow(c,2)+pow(a,2)==pow(b,2) )
            return 4;
    }
    else
    {
        return 0;
    }

    return 1;
}

int main()
{
    int a,b,c,x;

    cout << "enter triangle sides: " << endl;
    cin >> a >> b >> c;

    x = triunghi(a,b,c);

    switch(x)
    {
        case 0:
            cout << "it is not triangle" << endl;
            break;
        case 1:
            cout << "it is regular triangle" << endl;
            break;
        case 2:
            cout << "it is isosceles triangle" << endl;
            break;
        case 3:
            cout << "it is equilateral triangle" << endl;
            break;
        case 4:
            cout << "it is right-angled triangle" << endl;
            break;
    }

    return 0;
}
