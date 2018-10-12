#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    int nipk,n=0,jipk=0;
    srand(time(NULL));
    cout << "Masukan jumlah IPK= ";
    cin >> nipk;
    for(n=1;n<=nipk;n++)
    {
        float ipk=rand()%401/100.00;
        cout << ipk << " ";
        if(ipk>=3.51)
        {
            jipk=jipk+1;
        }
    }
    cout << endl;
    cout << "Jumlah IPK di atas 3.51     = " << jipk << endl;
    float pipk=jipk*100/nipk;
    cout << "Persentase IPK di atas 3.51 = " << pipk << "%" << endl;

    return 0;
}