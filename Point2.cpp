#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int count=16,sum=17,*x,*y;
    x=&sum;
    *x=27;
    y=x;
    x=&count;
    *x=count;
    printf("count=%d,sum=%d,*x=%d,*y=%d\n",count,sum,*x,*y);
    return 0;
}