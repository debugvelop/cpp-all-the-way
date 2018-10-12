#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    char x;
    float y,z,a=0,sks=0,bobot=0,ip=0;
    do
    {
        a=a+1;
        cout << "Masukan nilai ke-" << a << "    = ";
        cin >> x;
        if(x!='X')
        {
            cout << "Masukan bobot SKS ke-" << a << "= ";
            cin >> y;
            if(x=='A')
            {
                z=4*y;
                cout << "Nilai A=4, bobot " << z << endl;
            }
            else
            {
                if(x=='B')
                {
                    z=3*y;
                    cout << "Nilai B=3, bobot " << z << endl;
                }
                else
                {
                    if(x=='C')
                    {
                        z=2*y;
                        cout << "Nilai C=2, bobot " << z << endl;
                    }
                    else
                    {
                        if(x=='D')
                        {
                            z=1*y;
                            cout << "Nilai D=1, bobot " << z << endl;
                        }
                        if(x=='E')
                        {
                            z=0*y;
                            cout << "Nilai E=0, bobot " << z << endl;
                        }
                    }
                }
            }
            sks=y+sks;
            bobot=z+bobot;
        }
    } while(x!='X');
    
    ip=bobot/sks;
    cout << "Selesai \n";
    cout << "Jumlah SKS  = " << sks << endl;
    cout << "Jumlah bobot= " << bobot << endl;
    cout << "IP          = " << ip << endl;

    system("pause");
    return 0;
}