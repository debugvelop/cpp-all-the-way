#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float x,y,z,a;
    cout << "Sisi Pertama=";
    cin >> x;
    cout << "Sisi Kedua=";
    cin >> y;

    z=(x*x)+(y*y);
    a=sqrt(z);
    cout << a << endl;

    return 0;
}