#include <iostream>
using namespace std;

int main(){
    int inp,temp,min,a=0,b,c,d;
    cin >> inp;
    int myArr[inp];
    for(a=0;a<inp;a++){
        cin >> myArr[a];
    }
    for(a=0;a<inp-1;a++){
        min=a;
        for(b=a+1;b<inp;b++){
            if(myArr[b]<myArr[min]){
                min=b;
            }
        }
        temp=myArr[a];
        myArr[a]=myArr[min];
        myArr[min]=temp;
    }
    for(a=0;a<inp;a++){
        cout << myArr[a] << " ";
    }
    return 0;
}