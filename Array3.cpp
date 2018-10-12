#include <iostream>
using namespace std;

int main()
{
    int transpose[3][3]={};
    cout << "Masukan input matriks:" << endl;
    cin >> transpose[0][0] >> transpose[0][1] >> transpose[0][2];
    cin >> transpose[1][0] >> transpose[1][1] >> transpose[1][2];
    cin >> transpose[2][0] >> transpose[2][1] >> transpose[2][2];

    cout << "Hasil transpose:" << endl;
    cout << transpose[0][0] << " " << transpose[1][0] << " " << transpose[2][0] << endl;
    cout << transpose[0][1] << " " << transpose[1][1] << " " << transpose[2][1] << endl;
    cout << transpose[0][2] << " " << transpose[1][2] << " " << transpose[2][2] << endl;

    system("pause");
    return 0;
}