#include <iostream>
using namespace std;

//fifo
/*int main(){
    int queueList[20];
    int counter,current,queueSize,head,seek=0,steps;
    float avg;
    cout << "First In First Out Scheduling Algorithm\n";
    cout << "Number of Queue: ";
    cin >> queueSize;
    cout << "Sector Queue:\n";
    for(counter=1;counter<=queueSize;counter++){
        cin >> queueList[counter];
    }
    cout << "Initial Head Position: ";
    cin >> head;
    queueList[0]=head;
    cout << "\n";
    for(current=0;current<=queueSize-1;current++){
        steps=abs(queueList[current+1]-queueList[current]);
        seek+=steps;
        cout << "Move from " << queueList[current] << " to " << queueList[current+1] << " with Seek " << steps << "\n";
    }
    cout << "\nTotal Seek Time: " << seek;
    avg=seek/(float)queueSize;
    cout << "\nAverage Seek Time: " << avg << "\n";
    return 0;
}*/

//SCAN
/*int main(){
    int diskSector[1];
    int current,direction,lastSector,queueSize,request,sectorIndex,head,seek=0,moves=0;
    bool reset;
    float avg;
    cout << "SCAN Scheduling Algorithm\n";
    cout << "Number of Disk Sector: ";
    cin >> lastSector;
    diskSector[lastSector];
    for(int counter=0;counter<lastSector;counter++){
        diskSector[counter]=0;
    }
    cout << "Number of Queue: ";
    cin >> queueSize;
    cout << "Sector Queue:\n";
    for(int counter=0;counter<queueSize;counter++){
        cin >> sectorIndex;
        diskSector[sectorIndex]=1;
    }
    cout << "Initial Head Position: ";
    cin >> head;
    current=head;
    cout << "Initial read direction (1. In|2. Out): ";
    cin >> direction;
    if(direction==1){
        reset=false;
    }
    else{
        reset=true;
    }
    request=queueSize;
    while(request!=0 || (head!=0 && head!=lastSector-1)){
        if(diskSector[head]==1){
            cout << "Move from " << current << " to " << head << " with " << moves << " seek\n";
            diskSector[head]=0;
            current=head;
            moves=0;
            request--;
        }
        if(reset){
            head--;
        }
        else{
            head++;
        }
        if(head==lastSector-1){
            reset=true;
        }
        if(head==0){
            reset=false;
        }
        moves++;
        seek++;
    }
    cout << "\nTotal Seek Time: " << seek;
    avg=(float)seek/(float)queueSize;
    cout << "\nAverage Seek Time: " << avg << "\n";
    return 0;
}*/

//C-LOOK
int main(){
    int diskSector[1];
    int base,current,direction,lastSector,out,queueSize,request,in,sectorIndex,head,seek=0,moves=0;
    bool reset;
    float avg;
    cout << "C-LOOK Scheduling Algorithm\n";
    cout << "Number of Disk Sector: ";
    cin >> lastSector;
    diskSector[lastSector];
    for(int counter=0;counter<lastSector;counter++){
        diskSector[counter]=0;
    }
    cout << "Initial Head Position: ";
    cin >> base;
    head=current=base;
    cout << "Initial read direction (1. In|2. Out): ";
    cin >> direction;
    if(direction==1){
        reset=false;
    }
    else{
        reset=true;
    }
    cout << "Number of Queue: ";
    cin >> queueSize;
    cout << "Sector Queue:\n";
    for(int counter=0;counter<queueSize;counter++){
        cin >> sectorIndex;
        diskSector[sectorIndex]=1;
        if(sectorIndex<base){
            out+=1;
        }
        else{
            in+=1;
        }
    }
    request=queueSize;
    while(request!=0){
        if(diskSector[head]==1){
            cout << "Move from " << current << " to " << head << " with " << moves << " seek\n";
            diskSector[head]=0;
            current=head;
            if(diskSector[head]<base){
                out--;
            }
            else{
                in--;
            }
            moves=0;
            request--;
        }
        if(reset){
            head--;
        }
        else{
            head++;
        }
        if(in==0 && out!=0){
            reset=true;
            head=base;
        }
        if(out==0 && in!=0){
            reset=false;
            head=base;
        }
        moves++;
        seek++;
        request=out+in;
    }
    cout << "\nTotal Seek Time: " << seek;
    avg=(float)seek/(float)queueSize;
    cout << "\nAverage Seek Time: " << avg << "\n";
    return 0;
}