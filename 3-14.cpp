#include <iostream>
using namespace std;

int main()
{
    int input;
    cout << "Masukan hari ke=";
    cin >> input;

    if(input==1)
    { cout << "Hari Senin\n"; }
    else if(input==2)
    { cout << "Hari Selasa\n"; }
    else if(input==3)
    { cout << "Hari Rabu\n"; }
    else if(input==4)
    { cout << "Hari Kamis\n"; }
    else if(input==5)
    { cout << "Hari Jumat\n"; }
    else if(input==6)
    { cout << "Hari Sabtu\n"; }
    else if(input==7)
    { cout << "Hari Minggu\n"; }
    else
    { cout << "Salah input\n"; }

    system("pause");
    return 0;
}