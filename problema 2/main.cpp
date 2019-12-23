#include <iostream>

using namespace std;

int main()
{
    int n,num,minp;

    cout << "how many numbers? ";
    cin >> n;

    for (int i=1; i<=n; i++) {
        cin >> num;

        if (i==1) {
            minp=num;
        }

        if (0<num && num<minp) {
            minp=num;
        }
    }

    cout << "smallest positive number: " << minp << endl;

    return 0;
}
