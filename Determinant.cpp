#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout << "Masukan a=";
    cin >> a;
    cout << "Masukan b=";
    cin >> b;
    cout << "Masukan c=";
    cin >> c;

    int d=(b*b)-(4*a*c);
    if(d>0)
    {
        cout << "X1 dan X2 bersifat riil dan berbeda" << endl;
    }
    else
    {
        if(d==0)
        {
            cout << "X1 dan X2 bersifat riil dan sama" << endl;
        }
        else
        {
            cout << "X1 dan X2 bersifat imaginer" << endl;
        }
    }

    return 0;
}