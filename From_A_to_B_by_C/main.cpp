#include <iostream>

using namespace std;

int main()
{
    int start1,end1,step1,i;

    cout << "from ";
    cin >> start1;

    cout << "to ";
    cin >> end1;

    while(start1==end1)
    {
        cout << "\nnumbers cant be equal!!" << endl;

        cout << "from ";
        cin >> start1;

        cout << "to ";
        cin >> end1;
    }

    cout << "step by ";
    cin >> step1;

    if(start1<end1)
    {
        for(i=start1; i<=end1; i=i+step1)
            cout << i << endl;
    }
    else
    {
        for(i=start1; i>=end1; i=i-step1)
            cout << i << endl;
    }


    return 0;
}
