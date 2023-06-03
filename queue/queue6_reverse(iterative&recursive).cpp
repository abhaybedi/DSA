#include<iostream>
using namespace std;

void reverse_it(queue <int> &q){
    stack<int> s;
    while(q.empty()==false){
        int x=q.front();
        q.pop();
        s.push(x);
    }
    while(s.empty()==false){
        int x=s.top();
        s.pop();
        q.push(x);
    }
}

//no need of stack while using recursive implementation 
void reverse_rec(queue <int> &q){
    if(q.empty()==true){return;}
    int x=q.front();
    q.pop();
    reverse(q);
    q.push(x);
}



int main(){
   return 0;
}