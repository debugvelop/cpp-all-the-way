#include <iostream>
using namespace std;

int main()
{
    float x;
    cout << "Suhu Termometer Celsius=";
    cin >> x;

    float f,r,k;
    f=1.8*x+32;
    r=0.8*x;
    k=273+x;

    cout << "Suhu Termometer Fahrenheit=" << f << endl;
    cout << "Suhu Termometer Reamur=" << r << endl;
    cout << "Suhu Termometer Kelvin=" << k << endl;

    return 0;
}