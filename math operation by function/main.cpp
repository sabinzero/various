#include <iostream>

using namespace std;

float res(int,char,int);
int main()
{
    int a,b;
    char c;

    cout << "enter first number: ";
    cin >> a;

    cout << "enter operation sign: ";
    cin >> c;

    cout << "enter second number: ";
    cin >> b;

    cout << "result of the calculation is: " << res(a,c,b) << endl;

    return 0;
}
float res(int a,char c,int b)
{
    switch(c)
    {
        case '+': return a+b;
        break;
        case '-': return a-b;
        break;
        case '*': return a*b;
        break;
        case '/': return a/b;
        break;
        case '%': return a%b;
        break;
        default: return 0.001;
        break;
    }

}

