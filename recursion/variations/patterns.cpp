#include<iostream>
#include<vector>
using namespace std;


//the most basic variation in which the code finds all possible combinations
void printS(int ind, vector<int> &ds, int s, int sum, int arr[], int n) {
    if(ind ==n){
        if(s==sum){
            for(auto it:ds) cout<<it<<" ";
            cout<<endl;

        }
        ds.push_back(arr[ind]);
        s+=arr[ind];
        printS(ind+1,ds,s,sum,arr,n);
        s-=arr[ind];
        ds.pop_back();
        printS(ind+1, ds,s, sum, arr, n);
        }
}


// better implementation and slightly more optimised, but finds only a single pair, space and time consumed are less than prev
bool printS(int ind, vector<int> &ds, int s, int sum, int arr[], int n){
    if(s>sum) return false;
    if(ind == n){
        if(s==sum){
            for(auto it:ds) cout<<it<<" ";
            cout<<endl;
            return true;
        }
        }  
        else return false;
        ds.push_back(arr[ind]);
        s+=arr[ind];
        if(printS(ind+1,ds,s,sum,arr,n)==true){
            return true;
        }
        s-=arr[ind];
        ds.pop_back();
        if(printS(ind+1,ds,s,sum,arr,n)==true){
            return true;
        }
        return false;
}

// same implementation but with int, outpur>0 means the pairs present else not
int printS(int ind, vector<int> &ds, int s, int sum, int arr[], int n){
    if(ind==n){
        if(s==sum) return 1;
        else return 0;
    }

    ds.push_back(arr[ind]);
    s+=arr[ind];
    int l= prints(int ind+1,ds,s,sum,arr,n);
    s-=arr[ind];
    ds.pop_back();

    int r=prints(int ind+1,ds,s,sum,arr,n);
    return l+r;
}