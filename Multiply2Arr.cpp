#include <iostream>
using namespace std;

int ply(int a,int b)
{
    return a*b;
}

int main()
{
    int x,y;
    cin >> x;
    int arr1[x];
    int arr2[x];
    cout << "Input Array 1 \n";
    for(y=0;y<x;y++)
    {
        cin >> arr1[y];
    }
    cout << "Input Array 2 \n";
    for(y=0;y<x;y++)
    {
        cin >> arr2[y];
    }
    cout << "Hasil" << endl;
    for(y=0;y<x;y++)
    {
        cout << ply(arr1[y],arr2[y]) << " ";
    }
    cout << endl;
    system("pause");
}