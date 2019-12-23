#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n;
    char student_name[1000];
    ofstream fout ("catalog.txt", ios::app);

    cout << "give student name: "; cin >> student_name;
    cout << "get mark: "; cin >> n;

    if (n > 10 || n < 1){
        cout << "the mark must be between 1 and 10";
        return 7;
    }

    switch (n){
        case 10:
            cout << "excelent grade";
            break;
        case 9:
            cout << "good grade";
            break;
        case 8:
            cout << "good grade";
            break;
        case 7:
            cout << "you can do better";
            break;
        case 6:
            cout << "you must improve";
            break;
        case 5:
            cout << "you must improve";
            break;
        default:
            cout << "you failed";
    }

    fout << student_name << " " << n << endl;
    fout.close();


    return 0;
}
