#include<iostream>
using namespace std;


// simple bit inefficient implementation, enque is O(1), deque is O(n)

struct Queue{
    int size, cap;
    int *arr;
    Queue(int c){
        cap=c;
        size=0;
        arr=new int[cap];
    }

    bool isFull(){
        return (size==cap)
    }
    bool isEmpty(){
        return (size==0)
    }
    int enque(int x){
        if (isFull()){
            return; 
        }
        arr[size]=x;
        size++;
    }
    int deque(){
        int x=arr[0];
        for(int i=0;i<size-1;i++){
            arr[i]=arr[i+1];
        }
        size--;
        return x;
    }
    int getFront(){
        if(isEmpty()) return -1;
        else return arr[0];
    }
    int getRear(){
        if(isEmpty()) return -1;
        else return arr[size-1];
    }



}
int main(){
    Queue q1(5);
    enque()

}
