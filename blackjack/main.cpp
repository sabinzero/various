#include <iostream>
#include <ctime>
#include <unistd.h>
#include <string.h>

using namespace std;

int card()
{
    srand(time(NULL));
    sleep(1);
    return rand() % 14 + 1;
}

int ace()
{
    int a=0;
    while(a!=1 && a!=11)
    {
        cout << "\nYou got an ace. Choose its value(1 or 11): ";
        cin >> a;
    }
    return a;
}

int player(string p)
{
    int x,y,z,a,b,c,s,i=0;
    char hit;

    x=card();
    if(x>=12)
        a=10;
    else if (1<x and x<11)
        a=x;
    else
        a=ace();
    cout << "Card " << ++i << ": " << a << "(" << x << ")" << endl;

    y=card();
    if(y>=12)
        b=10;
    else if (1<y and y<11)
        b=y;
    else
        b=ace();
    cout << "Card " << ++i << ": " << b << "(" << y << ")" << endl;

    s=a+b;
    cout << "Sum for '" << p << "' is: " << s << endl;

    while(true)
    {
        cout << "Do you wish to continue (y/n): ";
        cin >> hit;
        if(tolower(hit)!='y')
            break;

        z=card();
        if(z>=12)
            c=10;
        else if (1<z and z<11)
            c=z;
        else
            c=ace();
        cout << "Card " << ++i << ": " << c << "(" << z << ")" << endl;

        s+=c;
        cout << "Sum for '" << p << "' is: " << s << endl;
        if (s>21) break;
    }

    return s;
}


int main()
{
    int s1,s2;
    string p1,p2, winner;

    cout << "\nplayer 1 name: ";
    cin >> p1;

    cout << "\nplayer 2 name: ";
    cin >> p2;

    cout << endl << p1 << " turn\n";
    s1=player(p1);

    cout << endl << p2 << " turn\n";
    s2=player(p2);

    if ((s2<s1 and s1<=21) or (s1<=21 and s2>21))
        winner=p1;
    else if((s1<s2 and s2<=21) or (s2<=21 and s1>21))
        winner=p2;
    else if (s1>21 and s2>21)
        winner="nobody";
    else
        winner="everyone";
    cout << endl << winner << " wins!!!" << endl;

    return 0;
}
