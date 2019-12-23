#include <iostream>

using namespace std;

int main()
{
    int n,num,p=1;

    cout << "enter how many numbers: ";
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> num;

        if(num != 0)
        {
            p=p*num;
        }
    }

    cout << "the product of numbers without 0 is: " << p << endl;

    return 0;
}
