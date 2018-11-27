#include <iostream>
#include <iomanip>
using namespace std;

int input2,input1;
int a=1,b,c,i,j,k,temp=0;
bool found=false;
struct student{
    long double studentNumber;
    string studentName;
    int studentScore;
};
student data_main[100],data_swap[100];

void insertSortNISN(int input2,student data_main[]){
    for(j=1;j<input2;j++){
        i=j-1;
        temp=data_main[j].studentNumber;
        data_swap[0]=data_main[j];
        while(data_main[i].studentNumber>temp&&i>=0){
            data_main[i+1]=data_main[i];
            i--;
        }
        data_main[i+1]=data_swap[0];
    }
}
void insertSortNilai(int input2,student data_main[]){
    for(j=1;j<input2;j++){
        i=j-1;
        temp=data_main[j].studentScore;
        data_swap[0]=data_main[j];
        while(data_main[i].studentScore>temp&&i>=0){
            data_main[i+1]=data_main[i];
            i--;
        }
        data_main[i+1]=data_swap[0];
    }
}

void selectSortNISN(int input2,student data_main[]){
    for(i=0;i<input2;i++){
        k=i;
        for(j=i+1;j<input2;j++){
            if(data_main[j].studentNumber<data_main[k].studentNumber){
                k=j;
            }
        }
        data_swap[0]=data_main[i];
        data_main[i]=data_main[k];
        data_main[k]=data_swap[0];
    }
}
void selectSortNilai(int input2,student data_main[]){
    for(i=0;i<input2;i++){
        k=i;
        for(j=i+1;j<input2;j++){
            if(data_main[j].studentScore<data_main[k].studentScore){
                k=j;
            }
        }
        data_swap[0]=data_main[i];
        data_main[i]=data_main[k];
        data_main[k]=data_swap[0];
    }
}

void bubbleSortNISN(int input2,student data_main[]){
    for(i=0;i<input2;i++){
        for(j=0;j<input2-i-1;j++){
            if(data_main[j].studentNumber>data_main[j+1].studentNumber){
                data_swap[0]=data_main[j];
                data_main[j]=data_main[j+1];
                data_main[j+1]=data_swap[0];
            }
        }
    }
}
void bubbleSortNilai(int input2,student data_main[]){
    for(i=0;i<input2;i++){
        for(j=0;j<input2-i-1;j++){
            if(data_main[j].studentScore>data_main[j+1].studentScore){
                data_swap[0]=data_main[j];
                data_main[j]=data_main[j+1];
                data_main[j+1]=data_swap[0];
            }
        }
    }
}

void mergeSwapNISN(int low,int mid,int high,student data_main[],student data_swap[]){
    int l1,l2,i;
    for(l1=low,l2=mid+1,i=low;l1<=mid&&l2<=high;i++){
        if(data_main[l1].studentNumber<=data_main[l2].studentNumber){
            data_swap[i]=data_main[l1++];}
        else{
            data_swap[i]=data_main[l2++];}
    }
    while(l1<=mid){
        data_swap[i++]=data_main[l1++];}
    while(l2<=high){
        data_swap[i++]=data_main[l2++];}
    for(i=low;i<=high;i++){
        data_main[i]=data_swap[i];}
}
void mergeSortNISN(int low,int high,student data_main[],student data_swap[]){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        mergeSortNISN(low,mid,data_main,data_swap);
        mergeSortNISN(mid+1,high,data_main,data_swap);
        mergeSwapNISN(low,mid,high,data_main,data_swap);
    }
    else{
        return;
    }
}

void mergeSwapNilai(int low,int mid,int high,student data_main[],student data_swap[]){
    int l1,l2,i;
    for(l1=low,l2=mid+1,i=low;l1<=mid&&l2<=high;i++){
        if(data_main[l1].studentScore<=data_main[l2].studentScore){
            data_swap[i]=data_main[l1++];}
        else{
            data_swap[i]=data_main[l2++];}
    }
        while(l1<=mid){
            data_swap[i++]=data_main[l1++];}
        while(l2<=high){
            data_swap[i++]=data_main[l2++];}
        for(i=low;i<=high;i++){
            data_main[i]=data_swap[i];}
}
void mergeSortNilai(int low,int high,student data_main[],student data_swap[]){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        mergeSortNilai(low,mid,data_main,data_swap);
        mergeSortNilai(mid+1,high,data_main,data_swap);
        mergeSwapNilai(low,mid,high,data_main,data_swap);
    }
    else{
        return;
    }
}

int partitionNISN(student data_main[],int low,int high){
    int pivot=data_main[high].studentNumber;
    int i=(low-1);
    for(int j=low;j<=high-1;j++){
        if(data_main[j].studentNumber<=pivot){
            i++;
            data_swap[0]=data_main[i];
            data_main[i]=data_main[j];
            data_main[j]=data_swap[0];
        }
    }
    data_swap[0]=data_main[i+1];
    data_main[i+1]=data_main[high];
    data_main[high]=data_swap[0];
    return (i+1);
}
void quickSortNISN(student data_main[],int low,int high){
    if(low<high){
        int part=partitionNISN(data_main,low,high);
        quickSortNISN(data_main,low,part-1);
        quickSortNISN(data_main,part+1,high);
    }
}

int partitionNilai(student data_main[],int low,int high){
    int pivot=data_main[high].studentScore;
    int i=(low-1);
    for(int j=low;j<=high-1;j++){
        if(data_main[j].studentScore<=pivot){
            i++;
            data_swap[0]=data_main[i];
            data_main[i]=data_main[j];
            data_main[j]=data_swap[0];
        }
    }
    data_swap[0]=data_main[i+1];
    data_main[i+1]=data_main[high];
    data_main[high]=data_swap[0];
    return (i+1);
}
void quickSortNilai(student data_main[],int low,int high){
    if(low<high){
        int part=partitionNilai(data_main,low,high);
        quickSortNilai(data_main,low,part-1);
        quickSortNilai(data_main,part+1,high);
    }
}

void printtab(int input2,student data_main[]){
    cout << "NISN" << setw(10) << "|" << "Nama" << setw(10) << "|" << "Nilai" << endl;
    cout << "---------------------------------------------\n";
    for(a=0;a<input2;a++){
        cout << data_main[a].studentNumber << setw(11) << "|" << data_main[a].studentName << setw(13) << "|" << data_main[a].studentScore << endl;
    }
    cout << endl;
}

int main(){
    int p=0,q=sizeof(data_main)/sizeof(data_main[0]),r;
    long double query;
    cout << "Data mahasiswa yang dimasukkan= ";
    cin >> input2;
    student data_main[input2];
    cout << "===============Data Mahasiswa================\n";
    for(a=0;a<input2;a++){
        cout << "NISN = ";
        cin >> data_main[a].studentNumber;
        cout << "Nama = ";
        cin >> data_main[a].studentName;
        cout << "Nilai= ";
        cin >> data_main[a].studentScore;
        cout << "---------------------------------------------\n";
    }
    top:
    cout << "===================Menu======================\n";
    cout << "1. Insert Sort\n";
    cout << "2. Select Sort\n";
    cout << "3. Bubble Sort\n";
    cout << "4. Merge Sort\n";
    cout << "5. Quick Sort\n";
    cout << "6. Binary Search\n";
    cout << "7. Sequential Search\n";
    cout << "8. Exit\n";
    cout << "Menu      = ";
    cin >> input1;
    cout << endl;
    switch(input1){
        case 1:
            insertSortNISN(input2,data_main);
            cout << "Urutan NISN\n";
            printtab(input2,data_main);
            insertSortNilai(input2,data_main);
            cout << "Urutan Nilai\n";
            printtab(input2,data_main);
            goto top;
        case 2:
            selectSortNISN(input2,data_main);
            cout << "Urutan NISN\n";
            printtab(input2,data_main);
            selectSortNilai(input2,data_main);
            cout << "Urutan Nilai\n";
            printtab(input2,data_main);
            goto top;
        case 3:
            bubbleSortNISN(input2,data_main);
            cout << "Urutan NISN\n";
            printtab(input2,data_main);
            bubbleSortNilai(input2,data_main);
            cout << "Urutan Nilai\n";
            printtab(input2,data_main);
            goto top;
        case 4:
            mergeSortNISN(0,input2-1,data_main,data_swap);
            cout << "Urutan NISN\n";
            printtab(input2,data_main);
            mergeSortNilai(0,input2-1,data_main,data_swap);
            cout << "Urutan Nilai\n";
            printtab(input2,data_main);
            goto top;
        case 5:
            quickSortNISN(data_main,0,input2-1);
            cout << "Urutan NISN\n";
            printtab(input2,data_main);
            quickSortNilai(data_main,0,input2-1);
            cout << "Urutan Nilai\n";
            printtab(input2,data_main);
            goto top;
        case 6:
            cout << "Query= ";
            cin >> query;
            quickSortNISN(data_main,0,input2-1);
            while(!found&&p<=q){
                r=(p+q)/2;
                if(data_main[r].studentNumber<query){
                    p=r+1;
                }
                else if(query==data_main[r].studentNumber){
                    found=true;
                }
                else{
                    q=r-1;
                }
            }
            if(found==false){
                cout << "Query not found\n";
            }
            else{
                cout << "NISN" << setw(10) << "|" << "Nama" << setw(10) << "|" << "Nilai" << endl;
                cout << data_main[i].studentNumber << setw(11) << "|" << data_main[i].studentName << setw(13) << "|" << data_main[i].studentScore  << endl;
            }
            cout << endl;
            goto top;
        case 7:
            cout << "Query= ";
            cin >> query;
            for(int i=0;i<input2;i++){
                if(data_main[i].studentNumber==query){
                    cout << "NISN" << setw(10) << "|" << "Nama" << setw(10) << "|" << "Nilai" << endl;
                    cout << data_main[i].studentNumber << setw(11) << "|" << data_main[i].studentName << setw(13) << "|" << data_main[i].studentScore << endl;
                    found=true;
                }
            }
            if(found==false){
                cout << "Query not found\n";
            }
            cout << endl;
            goto top;
        default:
            break;
    }
    system("pause");
    return 0;
}