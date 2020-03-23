#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout << "Masukan FPB=";
    cin >> a;
    cout << "Masukan angka pertama=";
    cin >> b;
    cout << "Masukan angka kedua=";
    cin >> c;

    int kpk=(b*c)/a;
    cout << "KPK=" << kpk << endl;

    return 0;
}