#include<iostream>
#include<queue>
using namespace std;

void printlinetrav(Node *root){
   if(root==NULL){return;}
   queue<Node *>q;
   q.push_back(root);
   
   while(!q.empty()){
      Node *curr=q.front();
      q.pop();

      
      cout<<(curr->key)<<endl;
      if(curr->left!=NULL) push_back(curr->left);
      if(curr->right!=NULL) push_back(curr->right);

   }


}

int main{


   return 0;
}