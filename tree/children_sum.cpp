#include<iostream>
using namespace std;
bool cSum(node*root){
    if(root==NULL) return true;
    if(root->left==NULL && root->right==NULL) return true;
    int sum=0;
    if(root->left!= NULL) {sum+=root->left->key;}
    if(root->right!=NULL) {sum+=root->right->key;}
    return( (sum==root->key) && Csum(root->left) && Csum(root->right))

}