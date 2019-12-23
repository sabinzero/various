#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{   ifstream fin("metro.in");
    ofstream fout("metro.out");

    string a;
    int b,c,d,e,f;

    fin >> a >> b >> c >> d >> e >> f;
    fout<< "At " << a << " there are " << (b-c)+(d-e)+f <<" passengers";

    fin.close();
    fout.close();

    return 0;
}
