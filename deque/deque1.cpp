#include<iostream>
using namespace std;

//implementation of deque using array(linear)
struct deque{
   int size,cap;
   int *arr;
   deque(int c)
   {
    cap=c;
    size=0;
    arr=new int[cap];
   }
   bool isFull(){
    return (cap==size);
   }
   bool isEmpty(){
    return (size==0);
   }
   void insFront(int x){
    if(isFull()) return;
    for(int i=(size-1);i>=0;i--){
        arr[i]=arr[i-1];
        arr[0]=x;
        }
    size++;
   }
   void delBack(){
    if(isEmpty()) return;
    size--;
   }
   void insBack(int x){
    if(isFull()) return;
    arr[size]=x;
    size++;
   }
   void delFront(){
    if(isEmpty()) return;
    for(int i=0;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    size--;
   }
   int getRear(){
    if(isEmpty()) return -1;
    else return (size-1);
   }


}