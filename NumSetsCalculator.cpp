#include <iostream>
using namespace std;

int main()
{
    int x,y,z=0;
    cout << "Masukan jumlah angka yang ingin ditampilkan= ";
    cin >> x;

    for(y=1;y<=x;y++)
    {
        z=z+1;
        cout << z << " ";
    }

    cout << " \n";
    system("pause");
    return 0;
}