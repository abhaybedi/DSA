#include<iostream>
using namespace std;

//better than the recursive solution (lower space complx)
int main(){
    int n;
    cin>>n;
    int prev2=0;
    int prev1=1;
    for(int i=2;i<=n;i++){
        int curi = prev1 + prev2;
        prev2=prev1;
        prev1=curi;
    }
    cout<<prev1;
}