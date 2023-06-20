#include<iostream>
using namespace std;
int size(node* root) {
    if(root==NULL) return 0;
    else
    return (1+size(root->left)+size(root->right));
}