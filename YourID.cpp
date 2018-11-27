#include <iostream>
#include <string>
using namespace std;

string a, b, c;
int main()
{
    cout << "Masukan Nama Lengkap" << endl;
    getline (cin,a);
    cout << "Masukan NIM" << endl;
    getline (cin,b);
    cout << "Masukan Alamat" << endl;
    getline (cin,c);

    cout << "Data Anda" << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}