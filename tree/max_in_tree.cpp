#include<iostream>
using namespace std;
int maxTree(node* root) {
    if(root==NULL) return INT_MIN;
    else 
    return max(root->key,max(maxTree(root->left),maxTree(root->right)));
}s