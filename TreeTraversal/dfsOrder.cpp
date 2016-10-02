#include<iostream>
#include<stdio.h>


using namespace std;

struct Node
{
  int data;
  Node * left;
  Node * right;
};


Node *  newNode(int num)
{
  cout<<"\n Inside the newNode function";
  Node *root = new(Node);
  root->data = num;
  root->left = NULL;
  root->right = NULL;

  return root; 
}

void printPreOrder(Node * root)
{
   if(root == NULL)
   { 
  //   cout<<"\n Tree empty\n";
     return;
   }
  
//  cout<<"\nContent of root is "<<root->data;
  
  {
    cout<<root->data<<"-->";    
    printPreOrder(root->left);
   
    printPreOrder(root->right);
   // cout<<root->data<<"-->";        
  } 
}

int main()
{
  Node * root = newNode(1);
  root->left = newNode(2);
  root->right = newNode(3);
  root->left->left = newNode(4);
  root->left->right = newNode(5);

  cout<<"\n After initialization";
  
  printPreOrder(root);
}
