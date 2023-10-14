#include<iostream>
using namespace std;
long f(int ind, int buy, long *values, int n, vector<vector<long>> &dp) {
    if(int ==n) return 0;
    if(dp[ind][buy] != -1) return dp[ind][buy];
    long profit=0;
    if(buy){
        profit=max(-values[ind] + f(ind+1,values, n, dp),
        0+f(ind+1,1,values,n,dp))
    }
    else{
        profit=max(values[ind]+f(ind+1,1,values,n,dp)
        0+f(ind+1,0,values,n,dp));
    }
    return dp[ind][buy]=profit;
}