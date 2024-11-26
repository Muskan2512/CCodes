#include <stdio.h>
#include<stdlib.h>
struct Node{
  int data;
  struct Node*left;
  struct Node*right;
};
int findIndex(int parent[],int n,int val){
  for(int i=0;i<n;i++){
    if(parent[i]==val){
      parent[i]=-5;
      return i;
    }
  }
  return -1;
}

struct Node* createTree(int data,int parent[],int n){
  int i=findIndex(parent,n,data);
  if(i==-1)return NULL;
  struct Node*root=malloc(sizeof(struct Node));
  root->data=i;
  root->left=createTree(root->data,parent,n);
  root->right=createTree(root->data,parent,n);
  return root;
}

void inorder(struct Node*root){
  if(root==NULL)return;
  inorder(root->left);
  printf("%d ",root->data);
  inorder(root->right);
}

int main() {
  int parent[]={1,5,5,2,2,-1,3};
  int n=sizeof(parent)/sizeof(int);
  struct Node*root=createTree(-1,parent,n);
  printf("Tree created successfully");
  printf("\nThe inorder traversal of the given tree is:");
  inorder(root);
  
  return 0;
}