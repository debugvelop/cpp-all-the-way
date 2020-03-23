#include <iostream>
using namespace std;

int main()
{
    int input,n,a,b,x=0,y=0,sum=0;
    cout << "Masukan jumlah angka yang ingin dihitung= ";
    cin >> n;
    int plus[n];
    for(x=0;x<n;x++)
    {
        cin >> plus[x];
    }
    for(x=0;x<n;x++)
    {
        sum=sum+plus[x];
    }
    cout << sum << endl;

    system("pause");
    return 0;
}