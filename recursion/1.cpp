#include<iostream>
using namespace std;

int fun(int n)
{
    if(n>0)
    {
        cout<<n<<endl;
        fun(n-1);
    }
}

int main()
{
    int c=3;
    fun(c);
    return 0;
}