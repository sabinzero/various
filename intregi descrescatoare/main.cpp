#include <iostream>

using namespace std;

int main()
{
    int x[100],r[100],num,xc,rc;

    cout << "enter how many numbers: " << endl;
    cin >> xc;

    rc=xc;

    cout << "enter " << xc << " numbers: " << endl;

    for(int i=0; i<xc; i++)
    {
        cin >> x[i];
    }

    for(int i=0; i<rc; i++)
    {
        r[i]=0;
    }

    for(int i=0; i<xc; i++)
    {
        num = x[i];
        if(i==0){
            r[0] = num;
            continue;
        }
        for(int j=0; j<=i; j++)
        {
            if(num<r[j])
                continue;
            else
            {
                for(int k=i; k>j; k--)
                    r[k] = r[k-1];
                r[j]=num;
                break;
            }
        }
    }

    for(int i=0; i<rc; i++)
    {
        cout << r[i] << " ";
    }
    cout << endl;

    return 0;
}
