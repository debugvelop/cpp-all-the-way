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
        break;
        case 2: cout << "Hari Senin\n";
        break;
        case 3: cout << "Hari Selasa\n";
        break;
        case 4: cout << "Hari Rabu\n";
        break;
        case 5: cout << "Hari Kamis\n";
        break;
        case 6: cout << "Hari Jumat\n";
        break;
        case 7: cout << "Hari Sabtu\n";
        break;
        default: cout << "Salah input\n";
        break;
    }

    system("pause");
    return 0;
}