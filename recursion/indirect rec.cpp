#include<bits/stdc++.h>

using namespace std;

void fun2(int n); //prototype of function to make the code run

void fun1(int n){
    if(n>0){
    cout<<n<<endl;
    fun2(n/2);
    }


}

void fun2(int n){
    if(n>0){
        cout<<n<<endl;
        fun1(n-1);

    }
}

int main(){
    int n;
    cin>>n;
    fun1(n);
}