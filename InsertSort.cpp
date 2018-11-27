#include <iostream>
using namespace std;

int main(){
    int inp,temp=0;
    cin >> inp;
    int myArr[inp];
    int a,b,c,d;
    for(a=0;a<inp;a++){
        cin >> myArr[a];
    }
    for(a=1;a<=inp;a++){
        b=a-1;
        temp=myArr[a];
        while(myArr[b]>temp&&b>=0){
            myArr[b+1]=myArr[b];
            b--;
        }
        myArr[b+1]=temp;
    }
    for(a=0;a<inp;a++){
        cout << myArr[a] << " ";
    }
    system("pause");
    return 0;
}