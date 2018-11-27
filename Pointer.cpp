#include <iostream>
using namespace std;

void swap(int &x,int &y)
{
    int z=x;
    x=y;
    y=z;
}

int main()
{
    char satu[]={"Praktikum Pemrograman"};
    char *p;
    p=&satu[0];
    cout << p << endl;

    char dua[]={"Gadjah Mada"};
    char *q;
    *q=dua[3];
    cout << *q << endl;

    int x,y;
    x=90,y=76;
    cout << x << " " << y << endl;
    swap(x,y);
    cout << x << " " << y << endl;

    return 0;
}