#include <iostream>
using namespace std;

int main()
{
    int limit,star1,star2,star3,x,y,i;
    cin >> limit;
    cout << "STAR 1" << endl;
    for(star1=1;star1<=limit;star1++)
    {
        x=limit-star1;
        y=0;
        while(x>0)
        {
            cout << " ";
            x--;
        }
        while(y<star1)
        {
            cout << "* ";
            y++;
        }
        cout << endl;
    }
    cout << endl;
    cout << "STAR 2" << endl;
    for(star2=1;star2<=limit;star2++)
    {
        x=1;
        y=0;
        while(x<star2)
        {
            cout << " ";
            x++;
        }
        while(y<=limit-star2)
        {
            cout << "* ";
            y++;
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    cout << "STAR 3" << endl;
    for(star1=1;star1<limit;star1++)
    {
        x=limit-star1;
        y=0;
        while(x>0)
        {
            cout << " ";
            x--;
        }
        while(y<star1)
        {
            cout << "* ";
            y++;
        }
        cout << endl;
    }
    for(star2=1;star2<=limit;star2++)
    {
        x=1;
        y=0;
        while(x<star2)
        {
            cout << " ";
            x++;
        }
        while(y<=limit-star2)
        {
            cout << "* ";
            y++;
        }
        cout << endl;
    }
    cout << endl;

    system("pause");
    return 0;
}