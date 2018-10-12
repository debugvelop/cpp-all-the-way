#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Masukan nilai Anda=";
    cin >> x;

    if(x<50)
    {
      cout << "Nilai C";  
    }
    else
    {
        if(x<=80)
        {
            cout << "Nilai B";
        }
        else
        {
            cout << "Nilai A";
        }
    }

    return 0;
}