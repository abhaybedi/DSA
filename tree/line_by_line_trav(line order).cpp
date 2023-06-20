#include<iostream>
#include<queue>
using namespace std;

//O(n)space O(n) time, uses null as a space barrier while printing
void printLevelorderline(Node *root){
   if(root==NULL){return;}
   queue<Node *>q;
   q.push_back(root);
   q.push_back(NULL);
   while(q>1){
      Node *curr=q.front();
      q.pop();
      if(curr=NULL){
         cout<<endl;
         q.push_back(NULL);
         continue;

      }
      cout<<(curr->key)<<endl;
      if(curr->left!=NULL) push_back(curr->left);
      if(curr->right!=NULL) push_back(curr->right);

   }


}
int main{

   return 0;
}