#include <iostream>
#include <stdio.h>
using namespace std;

int data_main[1000];
int data_new[1000];

void merge_sort(int low, int mid, int high)
{
    int l1,l2,i;
    for(l1=low,l2=mid+1,i=low;l1<=mid&&l2<=high;i++)
    {
        if(data_main[l1]<=data_main[l2])
            data_new[i]=data_main[l1++];
        else
            data_new[i]=data_main[l2++];
    }
        while(l1<=mid)
            data_new[i++]=data_main[l1++];
        while(l2<=high)
            data_new[i++]=data_main[l2++];
        for(i=low;i<=high;i++)
            data_main[i]=data_new[i];
}

void sort(int low, int high)
{
    int mid;
        if(low<high)
        {
            mid=low+(high-low)/2;
            sort(low,mid);
            sort(mid+1,high);
            merge_sort(low,mid,high);
        }
        else
        {
            return;
        }
}

void swap(int *a,int *b)
{
    int c=*a;
    *a=*b;
    *b=c;
}

int partition(int data_main[],int low,int high)
{
    int pivot=data_main[high];
    int i=(low-1);
    for(int j=low;j<=high-1;j++)
    {
        if(data_main[j]<=pivot)
        {
            i++;
            swap(&data_main[i],&data_main[j]);
        }
    }
    swap(&data_main[i+1],&data_main[high]);
    return (i+1);
}

void quicksort(int data_main[],int low,int high)
{
    if(low<high)
    {
        int part=partition(data_main,low,high);
        quicksort(data_main,low,part-1);
        quicksort(data_main,part+1,high);
    }
}

int main()
{
    int input,inp;
    int a,b,c,d,e;
    int i,j,min,temp;
    top:
    cout << "===================Sort=======================\n";
    cout << "1. Insert Sort\n";
    cout << "2. Select Sort\n";
    cout << "3. Bubble Sort\n";
    cout << "4. Merge Sort\n";
    cout << "5. Quick Sort\n";
    cout << "6. Exit\n";
    cout << "Menu        = ";
    cin >> inp;
    switch(inp)
    {
        case 1:
            cout << "Jumlah Deret= ";
            cin >> input;
            data_main[input];
            for(a=0;a<input;a++)
            {
                cin >> data_main[a];
            }
            for(j=1;j<=input;j++)
            {
                i=j-1;
                temp=data_main[j];
                while(data_main[i]>temp&&i>=0)
                {
                    data_main[i+1]=data_main[i];
                    i--;
                }
                data_main[i+1]=temp;
            }
            cout << "Ascending = ";
            for(e=1;e<=input;e++)
            {
                cout << data_main[e] << " ";
            }
            cout << endl;
            cout << "Descending= ";
            for(e=input;e>=1;e--)
            {
                cout << data_main[e] << " ";
            }
            cout << endl;
            cout << endl;
            goto top;
        case 2:
            cout << "Jumlah Deret= ";
            cin >> input;
            data_main[input];
            for(a=0;a<input;a++)
            {
                cin >> data_main[a];
            }
            for(i=0;i<input;i++)
            {
                min=i;
                for(j=i+1;j<input;j++)
                {
                if(data_main[j]<data_main[min])
                {
                    min=j;
                }
                }
                temp=data_main[i];
                data_main[i]=data_main[min];
                data_main[min]=temp;
            }
            cout << "Ascending = ";
            for(i=0;i<input;i++)
            {
                cout << data_main[i] << " ";
            }
            cout << endl;
            cout << "Descending= ";
            for(i=input-1;i>=0;i--)
            {
                cout << data_main[i] << " ";
            }
            cout << endl;
            cout << endl;
            goto top;
        case 3:
            cout << "Jumlah Deret= ";
            cin >> input;
            data_main[input];
            for(a=0;a<input;a++)
            {
                cin >> data_main[a];
            }
            for(i=0;i<input;i++)
            {
                for(j=0;j<input-i-1;j++)
                {
                    if(data_main[j]>data_main[j+1])
                    {
                        temp=data_main[j];
                        data_main[j]=data_main[j+1];
                        data_main[j+1]=temp;
                    }
                }
            }
            cout << "Ascending = ";
            for(i=0;i<input;i++)
            {
                cout << data_main[i] << " ";
            }
            cout << endl;
            cout << "Descending= ";
            for(i=input-1;i>=0;i--)
            {
                cout << data_main[i] << " ";
            }
            cout << endl;
            cout << endl;
            goto top;
        case 4:
            cout << "Jumlah Deret= ";
            cin >> input;
            data_main[input],data_new[input];
            for(a=0;a<input;a++)
            {
                cin >> data_main[a];
            }
            sort(0,input);
            cout << "Ascending = ";
            for(i=1;i<=input;i++)
            {
                cout << data_main[i] << " ";
            }
            cout << endl;
            cout << "Descending= ";
            for(i=input;i>=1;i--)
            {
                cout << data_main[i] << " ";
            }
            cout << endl;
            cout << endl;
            goto top;
        case 5:
            cout << "Jumlah Deret= ";
            cin >> input;
            data_main[input];
            for(a=0;a<input;a++)
            {
                cin >> data_main[a];
            }
            quicksort(data_main,0,input-1);
            cout << "Ascending = ";
            for(i=0;i<input;i++)
            {
                cout << data_main[i] << " ";
            }
            cout << endl;
            cout << "Descending= ";
            for(i=input-1;i>=0;i--)
            {
                cout << data_main[i] << " ";
            }
            cout << endl;
            cout << endl;
            goto top;
        default:
            break;
    }
    system("pause");
    return 0;
}



