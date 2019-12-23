#include <iostream>

using namespace std;

int main()
{
    char num, uc[100]={};
    int i=0;

    cout << "enter characters (0 to stop)" << endl;

    while (num != '0')
    {
        cout << "> ";
        cin >> num;

        if ('A' <= num && num <= 'Z')
        {
            uc[i++] = num;
        }
    }
    uc[i] = '\0';

    cout << "the upper case letters are : " << uc << endl;

    return 0;
}
