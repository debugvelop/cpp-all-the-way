#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int x,z=1;
    char y;
    cout << "Masukan jumlah huruf yang ingin ditampilkan= ";
    cin >> x;

    for(y='A';z<=x;y++)
    {
        cout << y << " ";
        z=z+1;
    }

    cout << " \n";
    system("pause");
    return 0;
}