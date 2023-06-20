#include<iostream>
using namespace std;
int maxlevel=0;
void printLeft(Node *root, int level) {
    if(root==NULL) return;
    if(maxlevel<level){
        cout<<(root->key)<<" ";
        maxlevel=level;
    }
    printLevel(root->left,level+1);
    printLevel(root->right,level+1);
   return 0;
}
void printleftview(node *root)
{
    printLeft(root,1);
}