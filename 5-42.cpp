#include <iostream>
using namespace std;

int main()
{
    int x,y=0,a,b,c=0;
    int bin[32];
    cout << "Masukan sebuah angka= ";
    cin >> x;
    while(y<=32)
    {
        bin[y]=x%2;
        x=x/2;
        y=y+1;
    }
    for(y=31;y>=0;y--)
    {
        cout << bin[y];
        c=c+1;
        if(c==8)
        {
            cout << " ";
            c=0;
        }
    }
    cout << " " << endl;
    system("pause");
    return 0;
}