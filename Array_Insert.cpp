#include <iostream>
using namespace std;

int main(){
    int x,y;
    cout << "This is Array" << endl;
    cout << "Masukan sebuah deret angka acak: ";
    cin >> x;
    int myArray[7];
    for(y=0;y<x;y++){
        int z=x%10;
        int a=x/10;
        x=a;
        myArray[y]=z;
    }
    cout << myArray[1] << endl;
    cout << myArray[3] << endl;
    cout << myArray[5] << endl;

    return 0;
}