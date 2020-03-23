#include <iostream>
#include <iomanip>
using namespace std;

int input2,input1,query;
bool found=false;
int a=0,i,j,k,p,q,r,temp=0;
struct internet{
    long studentNumber;
    long useQuota;
    long useTime;
};
internet data_main[15],data_swap[15];

void selectSort(int input2,internet data_main[]){
    for(i=0;i<input2;i++){
        k=i;
        for(j=i+1;j<input2;j++){
            if(data_main[j].useTime<data_main[k].useTime){
                k=j;
            }
        }
        data_swap[0]=data_main[i];
        data_main[i]=data_main[k];
        data_main[k]=data_swap[0];
        a++;
    }
}

void printtab(int input2,internet data_main[]){
    cout  << setw(5) << "NIF" << "|" <<  setw(13) << "Quota (MB)" << "|"  << setw(8) << "Time" << "|" << endl;
    cout << "-------------------------------\n";
    for(a=0;a<input2;a++){
        cout  << setw(3) << data_main[a].studentNumber << "|"  << setw(13) << data_main[a].useQuota << "|"  << setw(8) << data_main[a].useTime << "|" << endl;
    }
    cout << endl;
}

int main(){
    data_main[0].studentNumber={12612};
    data_main[1].studentNumber={12932};
    data_main[2].studentNumber={12742};
    data_main[3].studentNumber={12972};
    data_main[4].studentNumber={12418};
    data_main[5].studentNumber={12835};
    data_main[6].studentNumber={12782};
    data_main[7].studentNumber={12265};
    data_main[8].studentNumber={12944};
    data_main[9].studentNumber={12988};
    data_main[10].studentNumber={12776};
    data_main[11].studentNumber={12532};
    data_main[12].studentNumber={12318};
    data_main[13].studentNumber={12823};
    data_main[14].studentNumber={12553};
    data_main[0].useTime={203};
    data_main[1].useTime={105};
    data_main[2].useTime={135};
    data_main[3].useTime={164};
    data_main[4].useTime={152};
    data_main[5].useTime={192};
    data_main[6].useTime={134};
    data_main[7].useTime={196};
    data_main[8].useTime={168};
    data_main[9].useTime={150};
    data_main[10].useTime={108};
    data_main[11].useTime={95};
    data_main[12].useTime={157};
    data_main[13].useTime={128};
    data_main[14].useTime={116};
    data_main[0].useQuota={1343};
    data_main[1].useQuota={836};
    data_main[2].useQuota={943};
    data_main[3].useQuota={1762};
    data_main[4].useQuota={1572};
    data_main[5].useQuota={1628};
    data_main[6].useQuota={1273};
    data_main[7].useQuota={1792};
    data_main[8].useQuota={1335};
    data_main[9].useQuota={693};
    data_main[10].useQuota={1482};
    data_main[11].useQuota={1341};
    data_main[12].useQuota={1073};
    data_main[13].useQuota={957};
    data_main[14].useQuota={1328};
    cout << "=========Data Mahasiswa========\n";
    cout << endl;
    input2=15;
    selectSort(input2,data_main);
    cout << "Urutan menurut Waktu Daring\n";
    printtab(input2,data_main);
    cout << "Banyak Perpindahan Data= " << a << endl;
    cout << endl;
    cout << "Query= ";
    cin >> query;
    cout << endl;
    for(int i=0;i<input2;i++){
        if(data_main[i].useTime==query){
            cout << "NIF= " << data_main[i].studentNumber << endl;
            found=true;
        }
    }
    if(found==false){
        cout << "NIF  = Tidak ada\n";
    }
    cout << endl;
    system("pause");
    return 0;
}