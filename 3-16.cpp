#include <iostream>
using namespace std;

int main()
{
    int input;
    cout << "Masukan hari ke-";
    cin >> input;

    switch(input)
    {
        case 1: cout << "Hari Minggu\n";
        case 2: cout << "Hari Senin\n";
        case 3: cout << "Hari Selasa\n";
        case 4: cout << "Hari Rabu\n";
        case 5: cout << "Hari Kamis\n";
        case 6: cout << "Hari Jumat\n";
        case 7: cout << "Hari Sabtu\n";
        default: cout << "Salah input\n";
    }

    system("pause");
    return 0;
}