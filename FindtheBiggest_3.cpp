#include <iostream>
using namespace std;

int main(){
    int a,b,c,d;
    // Which one from these three numbers is the biggest?
    cout << "First number= ";
    cin >> a;
    cout << "Second number= ";
    cin >> b;
    cout << "Third number= ";
    cin >> c;

    if(a>b){
        if(a>c){
            cout << "First number is the biggest" << endl;
        }
        else{
            cout << "Third number is the biggest" << endl;
        }
    }
    else{
        if(b>c){
            cout << "Second number is the biggest" << endl;
        }
        else{
            cout << "Third number is the biggest" << endl;
        }
    }

    return 0;
}