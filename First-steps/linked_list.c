#include <stdio.h>
#include <stdlib.h>

// definition of a structure for a node

typedef struct Node {
    int data;
    struct Node *next; //points to the next node
}Node;

void printList(struct Node* head) //takes a pointer to the hes of the linked list
{
    Node *current = head; //temporary pointer called current
    while (current != NULL)
        {
            printf("%d-> ", current->data);
            current = current->next;
        }
        printf("NULL\n");

}

int main(void) {

    // creating nodes
        Node *head = (Node*)malloc(sizeof(Node));
        Node *second = (Node*)malloc(sizeof(Node));
        Node *third = (Node*)malloc(sizeof(Node));
        
        //assigning data to the node and linking them

        head->data = 1;
        head->next = second;

        second->data = 2;
        second->next = third;

        third->data = 3;
        third->next = NULL;

        //printing the list

        printList(head);

        //freeing the mem
        free(head);
        free(second);
        free(third);

        return (0);
}