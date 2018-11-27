#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int input,x;
    float y=0,z=0;
    cin >> input;
    for(x=1;x<=input;x++)
    {
        y=x/(pow(2,x));
        z=y+z;
    }
    cout << z << endl;
    return 0;
}