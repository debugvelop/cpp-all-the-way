#include <iostream>
#include <string>
using namespace std;

struct tanaman
{
    string nama;
    float keindahan;
    int nilai;
    float tren;
    float periode;
};

tanaman data[1000];
int input,x,y,f,maks=0;
float a,b,c,d,e,fnl;
string invest;

int main()
{
    cin >> input;
    for(x=0;x<input;x++)
    {
        cout << "Nama tanaman     = ";
        cin >> data[x].nama;
        cout << "Tingkat keindahan= ";
        cin >> data[x].keindahan;
        cout << "Nilai jual       = ";
        cin >> data[x].nilai;
        cout << "Tren tanaman     = ";
        cin >> data[x].tren;
        cout << "Periode tren     = ";
        cin >> data[x].periode;
        cout << endl;
    }

    for(y=0;y<input;y++)
    {
        f=data[y].nilai;
        if(maks<f)
        {
            maks=f;
        }
    }

    for(x=0;x<input;x++)
    {
        a=10-data[x].keindahan;
        b=data[x].nilai;
        b=b/maks*10;
        c=10-data[x].tren;
        d=10-data[x].periode;
        e=a+b+c+d;
        cout << e;
        if(fnl<e)
        {
            fnl=e;
            invest=data[x].nama;
        }
    }
    cout << "Tanaman invest= " << invest << endl;

    return 0;
}