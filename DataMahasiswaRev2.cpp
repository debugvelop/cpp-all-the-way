#include <iostream>
#include <string.h>
using namespace std;

struct mahasiswa
{
    string name;
    int age;
    float gpa;
};

mahasiswa data[1000];

int main()
{
    int menu,input,inp,a,b,c;
    top:
    cout << "Menu" << endl;
    cout << "1. Add student data" << endl;
    cout << "2. Edit student data" << endl;
    cout << "3. View student data" << endl;
    cout << "4. Exit" << endl;
    cout << "========================\n";
    cout << "Menu ";
    cin >> menu;
    switch(menu)
    {
        case 1:
            cout << "How much data would you like to input? ";
            cin >> input;
            for(a=0;a<input;a++)
            {
                cout << "Name= ";
                cin >> data[a].name;
                cout << "Age = ";
                cin >> data[a].age;
                cout << "IPK = ";
                cin >> data[a].gpa;
                cout << "========================\n";
            }
            system("pause");
            cout << endl;
            goto top;
        case 2:
            cout << "Which data would you like to change? ";
            cin >> input;
            input=input-1;
            cout << "Existing data\n";
            cout << "Name= " << data[input].name << endl;
            cout << "Age = " << data[input].age << endl;
            cout << "IPK = " << data[input].gpa << endl;
            cout << "========================\n";
            cout << "New data\n";
            cout << "Name= ";
            cin >> data[input].name;
            cout << "Age = ";
            cin >> data[input].age;
            cout << "IPK = ";
            cin >> data[input].gpa;
            system("pause");
            cout << endl;
            goto top;
        case 3:
            cout << "Which data would you like to see? ";
            cin >> a;
            cin >> b;
            for(input=a-1;input<b;input++)
            {
                c=input+1;
                cout << "Data " << c << endl;
                cout << "Name= " << data[input].name << endl;
                cout << "Age = " << data[input].age << endl;
                cout << "IPK = " << data[input].gpa << endl;
                cout << "========================\n";
            }
            system("pause");
            cout << endl;
            goto top;
        default:
            break;
    }
    system("pause");
    return 0;
}