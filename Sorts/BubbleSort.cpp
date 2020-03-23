#include <iostream>
using namespace std;

int main(){
    int inp;
    cin >> inp;
    int myArr[inp];
    int a=0,b,c,d;
    for(b=0;b<inp;b++){
        cin >> myArr[b];
    }
    while(a<inp){
        for(b=0;b<inp;b++){
            c=b+1;
            if(c<inp&&myArr[b]>myArr[c]){
                d=myArr[b];
                myArr[b]=myArr[c];
                myArr[c]=d;
            }
        }
        a++;
    }
    for(b=0;b<inp;b++){
        cout << myArr[b] << " ";
    }
    system("pause");
    return 0;
}