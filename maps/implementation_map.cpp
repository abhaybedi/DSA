#include<bits/stdc++.h>
#include<iterator>
using namespace std;

int main(){
    map<int,string> map;
    map[1]="abc"; //insertion operation takes O(log n) time
    map[3]="acd";
    map[6]="bca";
    map.insert({2,"aas"});
    map<int,int> :: iterator it;
    for(it=map.begin();it!=map.end();++it){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }

    cout<<map.size()<<endl; //prints size of map
    auto it= map.find(3); //returns the iterator to the value O(log n)
    map.erase(3); // takes input both as key or iterator  and deletes the value form map
    map.clear() //erases the entire map



}