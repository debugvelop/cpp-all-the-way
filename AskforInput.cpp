#include <iostream>
using namespace std;

int main()
{
    int x,y,z=1;
    while(x!=0&&z<6)
    {
        cout << "Masukan angka=";
        cin >> x;

        y=x%2;
        if(y!=0)
        {
            z=z+1;
        }
    }
    cout << "Terimakasih \n";

    return 0;

}