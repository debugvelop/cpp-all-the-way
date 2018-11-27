#include <iostream>
#include <algorithm>
using namespace std;

int data[100];
int input,a;

void swap(int *a,int *b){
    int c=*a;
    *a=*b;
    *b=c;
}

int partition(int data[],int low,int high){
    int pivot=data[high];
    int i=(low-1);
    for(int j=low;j<=high-1;j++){
        if(data[j]<=pivot){
            i++;
            swap(&data[i],&data[j]);
        }
    }
    swap(&data[i+1],&data[high]);
    return (i+1);
}

void quicksort(int data[],int low,int high){
    if(low<high){
        int part=partition(data,low,high);
        quicksort(data,low,part-1);
        quicksort(data,part+1,high);
    }
}

void print(int data[],int size){
    int i;
    for(i=0;i<size;i++){
        cout << data[i] << " ";
    }
}

int main(){
    cout << "Deret     = ";
    cin >> input;
    data[input];
    for(a=0;a<input;a++){
        cin >> data[a];
    }
    quicksort(data,0,input-1);
    print(data,input);
    return 0;
}