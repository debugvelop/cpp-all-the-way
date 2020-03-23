#include <iostream>
#include <string.h>
using namespace std;

int main(){
    cout << "Array Test Case" << endl;
    char x[100];
    char y[100];
    cout << "Ketik sebuah kata: ";
    cin >> x;

    strcpy(y,"QWERT");
    cout << "Tes strcpy    : " << y << endl;

    strncat(y,x,5);
    cout << "Tes strncat   : " << y << endl;

    cout << "Tes strcmp    : ";
    cout << strcmp(x,y) << endl;

    cout << "Jumlah array 1: ";
    cout << strlen(x) << endl;
    cout << "Jumlah array 2: ";
    cout << strlen(y) << endl;

    system("pause");
    return 0;
}