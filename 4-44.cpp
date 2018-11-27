#include <iostream>
using namespace std;

int main()
{
    int x,y,z=0,a=0,c=1,d=0;
    cout << "Masukan batas tabel perkalian yang ingin ditampilkan= ";
    cin >> x;

    cout << "*" << "   ";
    for(y=1;y<=x;y++)
    {
        z=z+1;
        cout << z << "   ";
    }
    cout << " \n";
    while(c<=x)
    {
        d=d+1;
        int b=1;
        if(d>9)
        {
            cout << d << "  ";
        }
        else
        {
            cout << d << "   ";
        }
        for(y=1;y<=x;y++)
        {
            a=d*b;
            if(a>9)
            {
                cout << a << "  ";
            }
            else
            {
                cout << a << "   ";
            }
            b=b+1;
        }
        c=c+1;
        cout << " \n";
    }

    system("pause");
    return 0;
}