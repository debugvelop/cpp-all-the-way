#include <iostream>
using namespace std;

int main(){
    int z,x;
    cout << "First number please" << endl;
    cin >> z;
    cout << "Second please" << endl;
    cin >> x;

    if (z>x){
        cout << "First Number is the biggest";
    }
    else{
        cout << "Second Number is the biggest";
    }
    return 0;
}