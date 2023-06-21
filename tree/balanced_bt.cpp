#include<iostream>
using namespace std;

struct node{
    int key;
    struct node *left;
    struct node *right;
    node(int x){
        key=x;
        left=NULL;
        right=NULL;
    }
};

int height(node* node)
{
    if (node == NULL)
        return 0;
    else {
        int lDepth = height(node->left);
        int rDepth = height(node->right);
 
        if (lDepth > rDepth)
            return (lDepth + 1);
        else
            return (rDepth + 1);
    }
}

bool isBalanced(node *root) {
    if(root==NULL) return true;
    int lh=height(root->left);
    int rh=height(root->right);
    return((abs(lh-rh)<=1)&&isBalanced(root->left)&&isBalanced(root->right));
   
}

int main(){
    node *root= new node(10);
    root->left=new node(20);
    root->right=new node(30);
    if(isBalanced(root))
    cout<<"balanced";
}