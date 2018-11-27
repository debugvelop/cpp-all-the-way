#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout << "Masukan angka pertama=";
    cin >> a;
    cout << "Masukan angka kedua=";
    cin >> b;
    cout << "Masukan angka ketiga=";
    cin >> c;

    if(a>b)
    {
        if(a>c)
        {
            cout << "Bilangan pertama adalah yang terbesar" << endl;
        }
        else
        {
            cout << "Bilangan ketiga adalah yang terbesar" << endl;
        }
    }
    else
    {
        if(b>c)
        {
            cout << "Bilangan kedua adalah yang terbesar" << endl;
        }
        else
        {
            cout << "Bilangan ketiga adalah yang terbesar" << endl;
        }
    }

    return 0;
}