#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Masukan Nilai Anda=";
    cin >> x;

    if(x>=80)
    {
        cout << "A" << endl;
    }
    else
    {
        if(x>=60)
        {
        cout << "B" << endl;
        }
        else
        {
            if(x>=40)
            {
                cout << "C" << endl;
            }
            else
            {
                if(x>=20)
                {
                cout << "D" << endl;
                }
                else
                {
                    cout << "E" << endl;
                }
            }
        }
    }

    return 0;
}
