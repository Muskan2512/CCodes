#include <stdio.h>
#include<stdlib.h>
struct Node{
  int data;
  struct Node*left;
  struct Node*right;
};

struct Node* createBST(int data,struct Node*root){
  if(root==NULL){
    struct Node*newnode=malloc(sizeof(struct Node));
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
  }
  if(data>root->data){
    root->right=createBST(data,root->right);
  }
  else{
    root->left=createBST(data,root->left);
  }
  return root;
}

void inorder(struct Node*root){
  if(root==NULL)return;
  inorder(root->left);
  printf("%d ",root->data);
  inorder(root->right);
}
void preorder(struct Node*root){
  if(root==NULL)return;
  printf("%d ",root->data);
  preorder(root->left);
  preorder(root->right);
}
void postorder(struct Node*root){
  if(root==NULL)return;
  postorder(root->left);
  postorder(root->right);
  printf("%d ",root->data);
}

int main() {
  struct Node*root=NULL;
  int val;
  while(1){
    // printf("Enter the node's value:");
    scanf("%d",&val);
    if(val==-1)break;
    else{
      root=createBST(val,root);
    }
  }
  printf("Tree created successfully");
  // printf("\nThe preorder traversal of the given tree is:");
  // preorder(root);
  printf("\nThe inorder traversal of the given tree is:");
  inorder(root);
  // printf("\nThe postorder traversal of the given tree is:");
  // postorder(root);
    return 0;
}