#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream file_in ("movies.txt");

    char year[4], name[20];

    while ( ! file_in.eof() ) {
        file_in >> year >> name;
        cout << "year: " << year;
        cout << " movie name: " << name << endl;
    }

    file_in.close();

    return 0;
}
