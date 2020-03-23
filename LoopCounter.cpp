#include <iostream>
using namespace std;

int main()
{
    int n1,n2,a1=1,a2,a3=0;
    cout << "Masukan nilai pertama=";
    cin >> n1;
    cout << "Masukan nilai kedua=";
    cin >> n2;

    if(n1>0&&n2>0)
    {
        while(a1<=n1)
        {
            for(a2=1;a2<=n2;a2++)
            {
                a3=a3+1;
                cout << "Perulangan ke-" << a3 << endl;
            }
            a1++;
        }
    }
    return 0;
}