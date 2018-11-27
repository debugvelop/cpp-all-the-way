#include <iostream>
using namespace std;

int main()
{
    int a;
    float jumlah=0;
    cout << "Masukan nilai = ";
    cin >> a;

    if(a>10)
    {
        jumlah=jumlah+a;
    }
    else
    {
        jumlah=jumlah-a;
    }
    cout << "Jumlah = " << jumlah << endl;

    system("pause");
    return 0;
}