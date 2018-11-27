#include <iostream>
using namespace std;

int main()
{
    float x,y,z;
    cout << "Masukan angka pertama:";
    cin >> x;
    cout << "Masukan angka kedua  :";
    cin >> y;
    cout << " \n";
    cout << "Pilih mode kalkulator" << endl;
    cout << "1: Penjumlahan" << endl;
    cout << "2: Pengurangan" << endl;
    cout << "3: Perkalian" << endl;
    cout << "4: Pembagian" << endl;
    cout << "Mode ";
    cin >> z;
    cout << " \n";

    if(z==1)
    {
        float plus=x+y;
        cout << "Hasil=" << plus;
    }
    else
    {
        if(z==2)
        {
            float minus=x-y;
            cout << "Hasil=" << minus;
        }
        else
        {
            if(z==3)
            {
                float ply=x*y;
                cout << "Hasil=" << ply;
            }
            else
            {
                float div=x/y;
                cout << "Hasil=" << div;
            }
        }
    }

    return 0;
}