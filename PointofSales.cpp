#include <iostream>
using namespace std;

struct bargains
{
    string productcode;
    string productname;
    float price;
    float count;
};

int main()
{
    int input,much=0,a;
    float total=0,totalsum=0,average,money,exchange;
    cout << "=======       ===        ======\n";
    cout << "=      =    =     =     =\n";
    cout << "=       =  =       =   =\n";
    cout << "=      =   =       =    =\n";
    cout << "=     =    =       =     ==\n";
    cout << "=====      =       =       ===\n";
    cout << "=          =       =          =\n";
    cout << "=          =       =           =\n";
    cout << "=           =     =           =\n";
    cout << "=             ===       ======\n";
    cout << "Point         Of        Sales\n";
    cout << endl;
    cout << "How much product do you buy? ";
    cin >> input;
    cout << endl;
    bargains data[input];
    for(a=0;a<input;a++)
    {
        cout << "Product Code: ";
        cin >> data[a].productcode;
        cout << "Product Name: ";
        cin >> data[a].productname;
        cout << "Price       : ";
        cin >> data[a].price;
        cout << "Count       : ";
        cin >> data[a].count;
        cout << "=========================================\n";
        much=data[a].count+much;
        total=data[a].price*data[a].count+total;
        totalsum=total+totalsum;
    }
    cout << endl;
    average=totalsum/much;
    cout << "Total Products          = " << much << endl;
    cout << "Total Bill              = " << totalsum << endl;
    cout << "Average Bill per Product= " << average << endl;
    cout << endl;
    cout << "Your money              = ";
    cin >> money;
    exchange=money-totalsum;
    if(exchange<0)
    {
        cout << "Kurang duitnya cuk!" << endl;
    }
    else
    {
        cout << "Your exchange= " << exchange << endl;
    }

    system("pause");
    return 0;
}