#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int x=3,y=4;
    int *ip;
    ip=&x;
    y=*ip;
    x=10;
    *ip=3;
    printf("x=%d,y=%d,x,y");
    cout << endl;
    cout << endl;
    int a=0,b=0;
    int *f;
    f=&a;
    *f=3;
    cout << *f << endl;
    *f=a+4;
    cout << *f;
    return 0;
}