#include <iostream>
using namespace std;

int main()
{
    char x;
    cout << "Masukan Skor Anda=";
    cin >> x;

    if(x=='A')
    {
        cout << "4" << endl;
    }
    else
    {
        if(x=='B')
        {
            cout << "3" << endl;
        }
        else
        {
            if(x=='C')
            {
                cout << "2" << endl;
            }
            else
            {
                if(x=='D')
                {
                    cout << "1" << endl;
                }
                else
                {
                    cout << "0" << endl;
                }
            }
        }
    }

    return 0;
}