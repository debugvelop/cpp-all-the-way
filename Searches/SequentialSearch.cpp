#include <iostream>
using namespace std;

int main()
{
    bool found=false;
    char* name[]={"A","B","C","D","E","F"};
    char* number[]={"121","122","123","124","125","126"};
    char* query="123";
    float score[]={64.75,75.11,84.63,77.07,66.70,92.76};
    for(int i=0;i<6;i++)
    {
        if(number[i]==query)
        {
            cout << name[i] << " " << number[i] << " " << score[i] << endl;
            found=true;
        }
    }
    if(!found)
    {
        cout << "No data found";
    }
    return 0;
}