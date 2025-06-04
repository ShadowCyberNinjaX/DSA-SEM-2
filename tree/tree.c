/*create a tree 
struct node {
    int data;
    struct node* left;
    struct node* right;
};
write a function to create a node
write a function to connect node to left and right
*/
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
int main()
{
    struct node* root= create(2);
    left(root, 4);
    right(root, 6);
    left(root->left,42);
    right(root->right, 3);
}