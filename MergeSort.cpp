#include <iostream>
#include <stdio.h>
using namespace std;

int data[100];
int data_new[100];

void merge_sort(int low, int mid, int high){
    int l1,l2,i;
    for(l1=low,l2=mid+1,i=low;l1<=mid&&l2<=high;i++){
        if(data[l1]<=data[l2])
            data_new[i]=data[l1++];
        else
            data_new[i]=data[l2++];
    }
    while(l1<=mid)
        data_new[i++]=data[l1++];
    while(l2<=high)
        data_new[i++]=data[l2++];
    for(i=low;i<=high;i++)
        data[i]=data_new[i];
}

void sort(int low, int high){
    int mid;
    if(low<high){
        mid=low+(high-low)/2;
        sort(low,mid);
        sort(mid+1,high);
        merge_sort(low,mid,high);
    }
    else{
        return;
    }
}

int main(){
    int i,inp;
    cin >> inp;
    data[inp],data_new[inp];
    int a;
    for(a=0;a<inp;a++){
        cin >> data[a];
    }
    sort(0,inp);
    for(i=1;i<=inp;i++){
        cout << data[i] << " ";
    }

    system("pause");
    return 0;
}