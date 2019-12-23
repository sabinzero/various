#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <time.h>

using namespace std;

int main()
{
    int a;
    srand(time(NULL));
    for(int i=0; i<1; i++)
    {
        a = rand() % 6 + 1;
    }

    cout  << "by rolling the dice you got a : " << a << endl;

    return 0;
}
