#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a[100],b[100],res[100],numb;
    int ac=0,bc=0,rc=0;

    cout << "enter first list of numbers ('end' to stop)" << endl;
    do {
        cout << "next: ";
        cin >> numb;
        a[ac++] = numb;
    } while(numb.compare("end") != 0);
    cout << "number of elements in a: " << --ac << endl << endl;

    cout << "enter second list of numbers ('end' to stop)" << endl;
    do {
        cout << "next: ";
        cin >> numb;
        b[bc++] = numb;
    } while(numb.compare("end") != 0);
    cout << "number of elements in b: " << --bc << endl << endl;

    for(int i=0; i<ac; i++)
    {
        for(int j=0; j<bc; j++)
        {
            if(a[i].compare(b[j]) == 0)
            {
                res[rc++]=b[j];
            }
        }
    }

    cout << rc << " common elements: ";
    for(int k=0; k<rc; k++)
    {
        cout << res[k];
        if (k != rc-1)
            cout << ", ";
    }

    return 0;
}
