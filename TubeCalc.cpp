#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "Ini adalah kalkulator volume tabung" << endl;
    cout << "Masukan jari-jari tabung= ";
    cin >> a;
    cout << "Masukan tinggi tabung   = ";
    cin >> b;
    cout << " \n";

    int v=3.14*a*a*b;
    cout << "Volume Tabung           = " << v << endl;
    
    system("pause");
    return 0;
}