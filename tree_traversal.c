#include <stdio.h>
#include <stdlib.h>

struct node {
  int item;
  struct node* left;
  struct node* right;
};

// Inorder traversal
void inorderTraversal(struct node* root) {
  if (root == NULL) return;
  inorderTraversal(root->left);
  printf("%d\n", root->item);
  inorderTraversal(root->right);
}

// preorderTraversal traversal
void preorderTraversal(struct node* root) {
  if (root == NULL) return;
  printf("%d\n", root->item);
  preorderTraversal(root->left);
  preorderTraversal(root->right);
}

// postorderTraversal traversal
void postorderTraversal(struct node* root) {
  if (root == NULL) return;
  postorderTraversal(root->left);
  postorderTraversal(root->right);
  printf("%d\n", root->item);
}

// Create a new Node
struct node* createNode(int value) {
  struct node* newNode =(struct node*)malloc(sizeof(struct node));
  newNode->item = value;
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
}

int main() 
{
  int value;
  scanf("%d",&value);
  struct node *p = createNode(value);
  scanf("%d",&value);
  struct node *p1 = createNode(value);
  scanf("%d",&value);
  struct node *p2 = createNode(value);
  scanf("%d",&value);
  struct node *p3 = createNode(value);
  scanf("%d",&value);
  struct node *p4 = createNode(value);
  p->left=p1;
  p->right=p2;
  p->left=p3;
  p->right=p4;
  

  printf("Inorder traversal \n");
  inorderTraversal(p);

  printf("\nPreorder traversal \n");
  preorderTraversal(p);

  printf("\nPostorder traversal \n");
  postorderTraversal(p);
  return 0;
}