#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;
    int len;
    char c;

    cout << "enter string: ";
    getline(cin,a);

    len=a.length();

    for(int i=0; i<len; i++)
    {
        if(a.at(i)=='x' || a.at(i)=='y' || a.at(i)=='z')
        {
            c=a.at(i)-23;
        }
        else
            c=a.at(i)+3;

        cout << c;
    }

    return 0;
}
