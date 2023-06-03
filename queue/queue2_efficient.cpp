#include<iostream>
using namespace std;

//done using circular array

struct Queue{
    int *arr;
    int cap,size,front;
    Queue(int c){
        arr=new int [c];
        cap=c;
        front =0;
        size=0;
    }
    bool isFull{ return (cap==size);}
    bool isEmpty{ return (size==0);}
    int getFront{
        if(isEmpty())
        return -1;
        else
        return front;

    }
    int getRear{
        if(isEmpty())
        return -1;
        else
        return ((front+size-1)%cap);
    }
    int enque(int x){
        if(isFull()) return -1;
        int rear=(rear+1)%cap;
        arr[rear]=x;
        size++;
    }
    void deque(){
        if(isEmpty()) return;
        front=(front+1)%cap;
        size--;
    }
    
}