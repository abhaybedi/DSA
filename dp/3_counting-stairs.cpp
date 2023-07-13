#include<iostream>
using namespace std;
//the code is entirely similar to fibo, the problem is climping stairs;

int f(int i){
    if(i==0) return 1;
    if(i==1) return 1;
    left=f(i-1);
    right=f(i-2);
    return left + right;
}