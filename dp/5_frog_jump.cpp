#include<iostream>
using namespace std;

//using the table format
int main(){
    vector<int> dp(n,0);
    dp[0]=0;
    for(int i=0;i<n;i++){
        int fs=dp[i-1]+abs(height[i]-height[i-1]);
        int ss=INT_MAX;
        if(i>1) ss=fp[i-2] + abs(height[i] - height[i-2])labs
        dp[i] = min(fs,ss);
    }
}