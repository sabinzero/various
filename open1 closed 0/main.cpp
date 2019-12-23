#include <iostream>

using namespace std;

int main()
{
    char a;

    cout << "a= ";
    cin >> a;

    switch (a)
    {
        case '1' : cout << "OPEN" << endl;
        break;
         case '0' : cout << "CLOSED" << endl;
        break;
         default : return 0;
         break;
    }

       return 0;
}
