#include<iostream>
using namespace std;


struct node{
    int data;
    node *next;
    node(int x){
        data=x;
        next=NULL;
    }

};

struct queue{
    node *front,*rear;
    Queue(){
        front=NULL;
        rear=NULL;
    }

    void enque(int x){
        node *temp= new node(x);
        if(front==NULL){            
            front=temp;
            rear=temp;
            return;
        }
        rear->next=temp;
        rear=temp;
        return;
    }
    void deque(){
        if(front==NULL){ return; }
        node* temp=front;
        front=front->next;
        if(front==NULL){ rear=NULL; } //both on same node intitially
        delete(temp);
    }


}