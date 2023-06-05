#include<iostream>
using namespace std;
// maintain min at one end and max at other
struct ds
{
    deque<int> dq;
    void insertMin(int x){
        dq.push_front(x);
    }
    void insertMax(int x){
        dq.push_back(x);
    }
    int getMin(){
        return dq.front();
    }
    int getMax(){
        return dq.back();
    }
    int extractMin(){
        return dq.pop_front();
    }
    int insertMax(){
        return dq.pop_front();
    }
}