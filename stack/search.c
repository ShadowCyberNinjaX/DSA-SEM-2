//function to search an element in a stack implemented using an array
/*int top = -1; // global variable to track the top of the stack
int searchArray(int x,int a[]) {
    for(int i = top; i >= 0; i--) {
        if(a[i] == x) {
            return i;  // return index (optional)
        }
    }
    return -1; // not found
}
*/
//function to search an element in a stack implemented using a linked list
#include <stdio.h>
#include <stdlib.h>
int top= NULL;
struct Node {
    int data;
    struct Node* link;
};

void searchLinkedList(int x) {
    if (top == NULL) {
        printf("Stack is empty.\n");
        return;
    }
    struct Node* temp = top;
    int pos = 1;
    while (temp != NULL) {
        if (temp->data == x) {
            printf("Element %d found at position %d from top.\n", x, pos);
            return;
        }
        temp = temp->link;
        pos++;
    }
    printf("Element %d not found in the stack.\n", x);
}