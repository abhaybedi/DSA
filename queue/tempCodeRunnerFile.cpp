#include<iostream>
#include<queue>
using namespace std;



int main(){
   queue<int> q1;
   q1.push(10);
   q1.push(20);
   q1.push(30);
   cout<<q1.front()<<" "<<q1.back()<<endl;
}