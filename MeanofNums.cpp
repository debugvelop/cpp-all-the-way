#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d,e;
    cout << "Masukan nilai pertama=";
    cin >> a;
    cout << "Masukan nilai kedua  =";
    cin >> b;
    cout << "Masukan nilai ketiga =";
    cin >> c;
    cout << "Masukan nilai keempat=";
    cin >> d;
    cout << "Masukan nilai kelima =";
    cin >> e;
    cout << " \n";

    int mean=(a+b+c+d+e)/5;
    cout << "Rata-rata nilai=" << mean;

    return 0;
}