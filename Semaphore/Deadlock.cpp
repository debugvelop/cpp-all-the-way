//this code will simulate deadlock condition
//compile with -std=c++0x -pthread
#include <iostream>
#include <thread>
using namespace std;

bool stop=1;
//pointer to thread
thread* func1;
thread* func2;

void function1(bool foo){
    while(stop){;}
    ::func2->join();
}

void function2(bool foo){
    while(stop){;}
    ::func1->join();
}

int main(){
    //create thread with process inside it
    thread thread1(function1, 1);
    thread thread2(function2, 1);

    ::func1=&thread1;
    ::func2=&thread2;
    ::stop=0;
    thread1.join();
    thread2.join();
    //if the text below is printed, there is no deadlock
    cout << "Hello Home!";
}
