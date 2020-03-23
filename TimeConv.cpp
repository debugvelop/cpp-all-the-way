#include <iostream>
using namespace std;

int main()
{
    int input,jam,menit,detik;
    cin >> input;
    jam=input/3600;
    menit=(input%3600)/60;
    detik=(input%3600)%60;
    cout << jam << " jam" << " " << menit << " menit" << " " << detik << " detik" << endl;

    return 0;
}