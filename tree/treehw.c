#include <stdio.h>
#include <stdlib.h>
struct node {
    int item;
    struct node* left;
    struct node* right;
};

struct node* create(int x) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->item = x;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct node* left(struct node* root,int x)
{
    root->left=create(x);
}
struct node* right(struct node* root,int x)
{
    root->right=create(x);
}

//function to print the tree in-order
void inorder(struct node* root) {
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    printf("%d ", root->item);
    inorder(root->right);
}

//function to print the tree pre-order
void preorder(struct node* root) {
    if (root == NULL) {
        return;
    }
    printf("%d ", root->item);
    preorder(root->left);
    preorder(root->right);
}

//function to print the tree post-order
void postorder(struct node* root) 
{
    if (root == NULL) {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->item);
}

int main()
{
    struct node* root= create(2);
    left(root, 1);
    right(root, 6);
    // Adding nodes to the left subtree
    left(root->left,32);
    left(root->left->left,-1);
    right(root->left->left,-5);
    right(root->left,17);
    // Adding nodes to the right subtree
    left(root->right,85);
    left(root->right->left,90);
    right(root->right->left,95);
    right(root->right,100);
    printf("In-order traversal of the tree:\n");
    inorder(root);
    printf("\n");
    printf("Pre-order traversal of the tree:\n");
    preorder(root);
    printf("\n");
    printf("Post-order traversal of the tree:\n");
    postorder(root);
    printf("\n");
    return 0;
}