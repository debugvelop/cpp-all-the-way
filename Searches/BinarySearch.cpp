#include <iostream>
using namespace std;

int main()
{
    bool found=false;
    int data[]={0,1,2,3,4,5,6,7,8,9,10};
    int i=0,j=sizeof(data)/sizeof(data[0]),k,query=9;
    while(!found&&i<=j)
    {
        k=(i+j)/2;
        if(data[k]<query)
        {
            i=k+1;
        }
        if(data[k]==query)
        {
            found=true;
        }
        else
        {
            j=k-1;
        }
    }
    if(found==false)
    {
        cout << "Data not found";
    }
    else
    {
        cout << "Data found";
    }
    return 0;
}