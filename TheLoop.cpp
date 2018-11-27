#include <iostream>
using namespace std;

long double x;
int main()
{
    cout << "Start THE LOOP" << endl;
    cin >> x;
    for(int y=1;y>0;y++)
    {
        x=x*x;
        cout << x << endl;
    }

    return 0;
}