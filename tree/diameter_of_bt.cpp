#include<iostream>
using namespace std;

int height(node*root) {
    if(root==NULL) return 0;

    else return 1+max(height(root->left),height(root->right));
}
int diameter(node*root){
    int d1= height(root->left)+height(root->right);
    int d2= diameter(root->left);
    int d3= diameter(root->right);
    return max(d1,max(d2,d3));


}