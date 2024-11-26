#include <stdio.h>
#include<stdlib.h>
struct Node{
  int data;
  struct Node*left;
  struct Node*right;
};

struct Node* createTree(){
  int data;
  // printf("\nEnter the data:");
  scanf("%d",&data);
  if(data==-1)return NULL;
  else{
    struct Node* root=(struct Node*)malloc(sizeof(struct Node));
    root->data=data;
    // printf("\nEnter data to insert on the left of %d:",root->data);
    root->left=createTree();
    // printf("\nEnter data to insert on the right of %d:",root->data);
    root->right=createTree();
    return root;
  }
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
  struct Node*root=createTree();
  printf("Tree created successfully");
  printf("\nThe preorder traversal of the given tree is:");
  preorder(root);
  printf("\nThe inorder traversal of the given tree is:");
  inorder(root);
  printf("\nThe postorder traversal of the given tree is:");
  postorder(root);
    return 0;
}