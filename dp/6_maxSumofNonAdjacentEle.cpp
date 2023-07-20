#include<iostream>
#include<vector>
using namespace std;
int f(int ind,vector<int> &a,vector<int> &dp){
    if(ind==0) return a[ind];
    if(ind <0) return 0;
    if(dp[ind]!=-1) return dp[ind];
    int pick= a[ind] + f(ind-2,a,dp);
    int notpick= 0 + f(ind-1,a,dp);
    return dp[ind]=max( pick ,notpick);

}
int main(){
    vector<int> vec;
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    int index=vec.size();
    vector<int> dp(index,-1);
    

    cout<<f(index,vec,dp)<<endl;
}