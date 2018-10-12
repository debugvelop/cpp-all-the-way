#include <iostream>
using namespace std;

int main()
{
    int x,y,z,i,j;
    cout << "Masukan angka pertama=";
    cin >> x;
    cout << "Masukan angka kedua=";
    cin >> y;

    if(x>y)
    {
        while(i!=0)
        {
            z=x;
            y=z%y;
            int i=x%y;
            if(i==0)
            {
                cout << "FPB=" << y;
                break;
            }
        }
    }
    else
    {
        while(i!=0)
        {
            z=y;
            x=z%x;
            int i=y%x;
            if(i==0)
            {
                cout << "FPB=" << x;
                break;
            }
        }
        
    }
    return 0;
}