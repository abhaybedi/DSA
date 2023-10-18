#include<iostream>
using namespace std;
int f(int ind, int buy, vector<int> &prices,int n){
    if(ind==n||cap==0) return 0;
    if(buy==1){
        return max(-prices[ind]+f(ind+1,0,cap),
                0+f(ind+1,1,cap) );
    }
    else{
        return max(prices[ind],f(ind+1,1,cap-1),
                0+f(ind+1,0,cap));
    }
    
}
//incl dp array of [n]*[buy]*[cap]