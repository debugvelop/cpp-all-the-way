#include <iostream>
using namespace std;

struct fileAllocationTable{
    char fileName;
    int startBlock,fileSize,fileBlock[20];
}fileTable[20];

int main(){
    int count1,count2,numOfFile;
    cout << "Number of files: ";
    cin >> numOfFile;
    for(count1=0;count1<numOfFile;count1++){
        cout << "File name      : ";
        cin >> fileTable[count1].fileName;
        cout << "Starting block : ";
        cin >> fileTable[count1].startBlock;
        fileTable[count1].fileBlock[0]=fileTable[count1].startBlock;
        cout << "Number of block: ";
        cin >> fileTable[count1].fileSize;
        for(count2=1;count2<=fileTable[count1].fileSize;count2++){
            cout << "Block number " << count2 << " : ";
            cin >> fileTable[count1].fileBlock[count2];
        }
        cout << "========================================\n";
    }

    here:
    cout << "File\tStarting Block\tSize\tFile Block\n";
    for(count1=0;count1<numOfFile;count1++){
        cout << fileTable[count1].fileName << "\t" << fileTable[count1].startBlock << "\t" << "\t" << fileTable[count1].fileSize << "\t";
        for(count2=1;count2<=fileTable[count1].fileSize;count2++){
            cout << fileTable[count1].fileBlock[count2-1] << "--->" << fileTable[count1].fileBlock[count2] << "\n";
            cout << "\t" << "\t" << "\t" << "\t";
        }
        cout << "\n";
    }

    bool exit=false;
    string option1;
    cout << "Edit file block size? (Y/N) ";
    cin >> option1;
    while(!exit){
        if(option1=="Y"){
            cout << "========================================\n";
            cout << "File: ";
            char editedFile;
            cin >> editedFile;
            bool found=false;
            int indexFile;
            count1=0;
            while(!found){
                if(fileTable[count1].fileName==editedFile){
                    indexFile=count1;
                    found=true;
                }
                count1++;
            }
            cout << "Type 'Add' to add file block or 'Del' to remove file block ";
            string option2;
            cin >> option2;
            if(option2=="Add"){
                int addSize;
                int newSize;
                cout << "Added Size: ";
                cin >> addSize;
                newSize=fileTable[indexFile].fileSize+addSize;
                for(count1=fileTable[indexFile].fileSize+1;count1<=newSize;count1++){
                    cout << "Block number " << count1 << " : ";
                    cin >> fileTable[indexFile].fileBlock[count1];
                }
                fileTable[indexFile].fileSize=newSize;
                goto here;
            }
            if(option2=="Del"){
                int delSize;
                cout << "Deleted size: ";
                cin >> delSize;
                fileTable[indexFile].fileSize=fileTable[indexFile].fileSize-delSize;
                goto here;
            }
            else{
                break;
            }
            
        }
        else{
            exit=true;
        }
    }
    return 0;
}