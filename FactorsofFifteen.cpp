#include <iostream>
using namespace std;

int main()
{
    int x,a=0,b=0;
    for(x=1;x<=100;x++)
    {
        if(x%3==0)
        {
            a=a+1;
        }
        else if(x%5==0)
        {
            b=b+1;
        }
    }

    cout << "Total=" << a+b;
    return 0;
}