#include <iostream>
using namespace std;

int main()
{
    int max,b;
    cout << "Masukan sebuah angka=" << endl;
    cin >> b;

    if(max>b)
    {
        max=b;
    }
    else
    {
        b=max+b;
    }
}