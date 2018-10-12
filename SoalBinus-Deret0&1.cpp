#include <iostream>
using namespace std;

int main()
{
    int x,y,z,i=0,a,b,c,d;
    cin >> x;
    int rep[x];
    int cnt[x];
    while(i<x)
    {
        int repeat=0,Repeat=0,count=0;
        cin >> y;
        int larik[y];
        cin >> a;
        for(z=0;z<y;z++)
        {
            int b=a%10;
            int c=a/10;
            a=c;
            larik[z]=b;
        }
        for(z=0;z<y;z++)
        {
            d=z+1;
            if(larik[z]==larik[d])
            {
                repeat++;
                if(repeat>Repeat)
                {
                    Repeat=repeat;
                    count=larik[z];
                }
            }
            else
            {
                repeat=0;
            }
        }
        Repeat++;
        rep[i]=Repeat;
        cnt[i]=count;
        i++;
    }
    for(i=0;i<x;i++)
    {
        int e=i+1;
        cout << "Test Case " << e << endl; 
        cout << rep[i] << endl;
        cout << cnt[i] << endl;
    }

    return 0;
}
