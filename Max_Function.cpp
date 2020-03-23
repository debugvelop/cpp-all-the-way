#include <iostream>
using namespace std;

int max(int,int);

int main()
{
    cout << max(7,28) << endl;

    int a=6,b=9,c;
    c=max(a,b);
    cout << c << endl;

    cout << max(c,99) << endl;
}

int max(int n1,int n2)
{
    return (n1>n2) ? n1:n2;
}