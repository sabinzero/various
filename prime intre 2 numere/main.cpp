#include <iostream>
#include <math.h>

using namespace std;

char prime(unsigned int n)
{
    char res=1;
    unsigned int x=sqrt(n);

    for(unsigned int i=2; i<=x; i++)
        if(n%i==0)
            return 0;

    return res;
}

int main()
{
    unsigned int num1,num2,k=0,a,b,iter=0;

    cout << "enter first number: ";
    cin >> num1;

    cout << "enter second number: ";
    cin >> num2;

    a = (num1%2==0) ? num1+1 : num1+2;
    b = (num2%2==0) ? num2-1 : num2-2;

    for( unsigned int i=a; i<=b; i=i+2)
    {
        if(prime(i)==1)
        {
//            cout << i << endl;
            k++;
        }
        iter++;
    }

    cout << "the number of primes between " << num1 << " and " << num2 << " is: " << k << endl;
    cout << "the number of iterations: " << iter << endl;

    return 0;
}
