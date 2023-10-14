#include<iostream>
using namespace std;
int f(int i, int j, string &pattern, string &text, vector<vector<int>> &dp) {
    if(i<0 && j<0) return true;
    if(i<0 && j>=0) return false;
    if(j<0 && i>=0){
        for(int ii=0; ii<=i;ii++){
            if(pattern[ii]!='*') return false;
        }
    return true;
    }
    if(dp[i][j]!=0) return dp[i][j]; 

    if(pattern[i] == text[j] || pattern[i]=='?'){
        return dp[i][j]f(i-1,pattern,text);
    }
    if(pattern[i]=='*'){
        return dp[i][j] =f(i-1,j,pattern,text) |f(i,j-1,pattern, text);
    }
    return false;
}