#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Masukan Nilai Anda=";
    cin >> x;

    if(x>=85)
    {
        cout << "A" << endl;
    }
    else if(x>=70)
    {
        cout << "B" << endl;
    }
    else if(x>=40)
    {
        cout << "C" << endl;
    }
    else if(x>=20)
    {
        cout << "D" << endl;
    }
    else
    {
        cout << "E" << endl;
    }

    system("pause");
    return 0;
}
