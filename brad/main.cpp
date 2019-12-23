#include <iostream>

using namespace std;

int main()
{
    int a[]={1,1,2,3,4,2,3,4,5,1,1,1};
    int i=0,j=0;

    while(i<=11){
        j=1;
        while(j<=a[i]){
            cout << "x";
            j++;
        }
        cout << endl;
        i++;
    }


    return 0;
}
