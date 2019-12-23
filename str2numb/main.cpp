#include <iostream>

using namespace std;

int main()
{
    int sum=0, i;
    char fig[] = {'0','1','2','3','4','5','6','7','8','9'};
    char n=' ';

    while(n != '0') {
        cout << "give character" << endl;
        cin >> n;
        cout << n << endl;

        for (i=0; i<=9; i++) {
            if ( n == fig[i] ) {
                sum = sum + n%48;
            }
        }
    }
    cout << "the sum is: " << sum << endl;


    return 0;
}
