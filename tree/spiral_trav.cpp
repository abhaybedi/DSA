#include<iostream>
#include<queue>
#include<stack>
using namespace std;

voidprintSpiral(node* root){
    if(root==NULL)
    return;

    queue<node*> q;
    stack<int> s;
    q.push(root);
    bool reverse = false;
    while(root.empty()==false){
        node* curr = q.top();
        q.pop();
        if(reverse)
            s.push(curr->key);
        else
            cout<<curr->key<<" ";
        if(curr->left!=NULL) q.push(curr->left);
        if(curr->right!=NULL) q.push(curr->right);
    }
    if(reverse){
        while(s.empty()==false){
            cout<<s.top()<<" ";
            s.pop();
        }
    }
    reverse=!reverse;
    cout<<endl;

}