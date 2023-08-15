#include<iostream>
using namespace std;
void dfs(int node, vector<int> adj[], int vis[], vector<int> &ls){
    vis[node] = 1;
    for(auto it: adj[node]){
        if(!vis[it]){
            dfs(it,adj,vis,ls);
        }
    }
}
