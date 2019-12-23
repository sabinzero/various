#include <iostream>

using namespace std;

int main()
{
    int a[]={1,1,1,2,2,3,3,4,4,5,1,1,1};
    int i,j;

    i=0;
    while(i<sizeof(a)/sizeof(a[0])){
        j=1;
        while(j<=a[i]){
            cout<<"x";
            j++;
        }
        i++;
        cout<<endl;
    }

    return 0;
}
