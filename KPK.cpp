#include <iostream>
using namespace std;

int main()
{
    int x,y;
    cout << "Masukan angka pertama" << endl;
    cin >> x;
    cout << "Masukan angka kedua" << endl;
    cin >> y;

    if(x>y)
    {
        int i=0;
        while(i<=y)
        {
            i=i+1;
            int z=x*i;
            int j=z%y;
            if(j==0)
            {
                cout << "KPK=" << z;
                break;
            }
            else
            {
                
            }
        }
    }
    else
    {
        int i=0;
        while(i<=x)
        {
            i=i+1;
            int z=y*i;
            int j=z%x;
            if(j==0)
            {
                cout << "KPK=" << z;
                break;
            }
            else
            {
                
            }
        }
        
    }
    return 0;
}