#include <iostream>
using namespace std;

int in,out,option=0,buffer=0,buffer_size=10;
int main(){
    while(option != 3){
        cout << "Menu:" << endl << "(1)Produce" << endl << "(2)Consume" << endl << "(3)Exit" << endl;
        cout << "Input: ";
        cin >> option;
        switch(option){
        case 1:    
            if(buffer == buffer_size){
                cout << "Buffer is full!\n\n";
            }
            else{
                ++buffer;
                cout << "Buffer Space: " << buffer_size-buffer << endl << endl;
            }
            break;
        case 2:
            if(buffer == 0){
                cout << "Buffer is empty!\n\n";
            }
            else{
                --buffer;
                cout << "Buffer Space: " << buffer_size-buffer << endl << endl;
            }
            break;
        default:
            break;
        }
    }
}

/*int buffer[10];
int producer,consumer,in=0,out=0,option=0,buffer_size=10;
int main(){
    while(option != 3){
        cout << "Menu:" << endl << "(1)Produce" << endl << "(2)Consume" << endl << "(3)Exit" << endl;
        cout << "Input: ";
        cin >> option;
        switch(option){
        case 1:    
            if((in+1)%buffer_size==out){
                cout << "Buffer is full!\n";
            }
            else{
                cout << "Insert Value: ";
                cin >> producer;
                buffer[in]=producer;
                in=(in+1)%buffer_size;
            }
            break;
        case 2:
            if(in == out){
                cout << "Buffer is empty!\n";
            }
            else{
                consumer=buffer[out];
                cout << "Taken Value: " << consumer << endl;
                out=(out+1)%buffer_size;
            }
            break;
        default:
            break;
        }
    }
}*/