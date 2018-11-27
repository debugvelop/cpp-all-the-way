#include <iostream>
using namespace std;

int main()
{
    int x=10,y=33,z=0;
    cout << "Inisialisasi" << endl;
    cout << "x=" << x << endl;
    cout << "y=" << y << endl;
    cout << "z=" << z << endl;

    z=x;
    cout << "Pertukaran Pertama" << endl;
    cout << "x=" << x << endl;
    cout << "y=" << y << endl;
    cout << "z=" << z << endl;

    x=y;
    cout << "Pertukaran Kedua" << endl;
    cout << "x=" << x << endl;
    cout << "y=" << y << endl;
    cout << "z=" << z << endl;

    y=z;
    cout << "Pertukaran Ketiga" << endl;
    cout << "x=" << x << endl;
    cout << "y=" << y << endl;
    cout << "z=" << z << endl;

    system("pause");
    return 0;
}