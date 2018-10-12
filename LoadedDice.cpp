#include <iostream>
using namespace std;

int main()
{
    int x,y,z;
    cout << "Masukan angka pada sisi dadu=";
    cin >> x;
    cout << "Angka di sisi samping dadu adalah ";

    y=7-x;
    for(z=1;z<7;z++)
    {
        if(z!=x&&z!=y)
        {
            cout << z << " ";
        }
    }

    return 0;
}