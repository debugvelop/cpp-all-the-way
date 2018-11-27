#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Masukan sebuah angka" << endl;
    cin >> x;

    if (x%2==0)
    {
        cout << "Angka Genap";
    }
    else
    {
        cout << "Angka Ganjil";
    }
    return 0;
}