#include <iostream>
using namespace std;

void tristar(int inp);
int x,a,b;

int main()
{
    int inp;
    cin >> inp;
    tristar(inp);
}

void tristar(int inp)
{
    for(x=1;x<=inp;x++)
    {
        a=inp-x;
        b=0;
        while(a>0)
        {
            cout << " ";
            a--;
        }
        while(b<x)
        {
            cout << "* ";
            b++;
        }
        cout << endl;
    }
    system("pause");
}