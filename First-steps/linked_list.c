#include <stdio.h>
#include <stdlib.h>

// definition of a structure for a node

struct Node {
    int data;
    struct Node *next; //points to the next node
};

void printList(struct Node* head) //takes a pointer to the hes of the linked list
{
    struct Node *current = head; //temporary pointer called current
    while (current != NULL)
        {
            printf("%d-> ", current->data);
            current = current->next;
        }
        printf("NULL\n");

}

