#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int b=a+2;
    if(b>4)
    {
        float c=log(a+b);
        cout << a << "," << c;
    }
    else
    {
        float c=b*b*b*b*b;
        cout << a << "," << c;
    }

    return 0;
}