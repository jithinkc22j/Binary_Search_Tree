// C program to demonstrate binary search tree with Traversal. 
/* Created by Jithin K c */
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

struct node 
{ 

int key; 

struct node *left, *right; 
}; 

//  function to create a new BST node 

struct node *newNode(int item) 
{ 

struct node *temp = (struct node *)malloc(sizeof(struct node)); 

temp->key = item; 

temp->left = temp->right = NULL; 

return temp; 
} 

// function to insert a new node with given key in BST 

struct node* insert(struct node* node, int key) 
{ 

// If the tree is empty, return a new node

if (node == NULL) return newNode(key); 

// Otherwise, recur down the tree

if (key < node->key) 

node->left = insert(node->left, key); 

else if (key > node->key) 

node->right = insert(node->right, key); 


// return the (unchanged) node pointer

return node; 
} 
//  function to do inorder traversal of BST 
void inorder(struct node *root) 
{ 
if (root != NULL) 
{ 
inorder(root->left); 
printf("%c ", root->key); 
inorder(root->right); 
} 
} 
//  function to do preorder traversal of BST 
void preorder(struct node *root) 
{ 
if (root != NULL) 
{ 
printf("%c ", root->key); 
preorder(root->left);
preorder(root->right); 
} 
} 
//  function to do postorder traversal of BST 
void postorder(struct node *root) 
{ 
if (root != NULL) 
{ 
postorder(root->left);
postorder(root->right); 
printf("%c ", root->key); 
} 
} 


// Main Function

int main()
{
struct node *root = NULL;
int m;
printf("Enter the max value and elements:");
scanf("%d", &m);
for(int i=0;i<m;i++)
{
  char ap;
  //printf("enter the element:");
  scanf("%c", &ap);
  int n = ap;
 // printf("%d\n",n);
  if(i==0)
  {
      root=insert(root,n); 
      
  }
  else
  {
    insert(root,n);
      
  }
}
// print inoder traversal of the BST 
printf("\n inorder traversal:  \n");
inorder(root); 
printf("\n preorder traversal: \n");
// print preoder traversal of the BST
preorder(root);
// print postoder traversal of the BST
printf("\n postorder traversal:\n");
postorder(root);
return 0; 
} 
