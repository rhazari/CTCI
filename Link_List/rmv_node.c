#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int value;
    struct node* next;
}
node;

void push(struct node** ptr, int data)
{
    node* newptr = (node*)malloc(sizeof(node));
    newptr->value = data;
    
    newptr->next = (*ptr);
    (*ptr) = newptr;       
}

void printList(struct node* head)
{
    node* ptr = head;
    while(ptr != NULL)
    {
        printf("%d ",ptr->value);
        ptr = ptr->next;
    }
}

//Deleting a node without access to the head node
void delete_node(struct node **rmv){
    node *ptr = (*rmv)->next;
    (*rmv)->value = ptr->value;
    (*rmv)->next = ptr->next;
}

int main()
{
     node *p = NULL;
     push(&p, 5);
     push(&p, 9);
     push(&p, 13);
     push(&p, 3);
     push(&p, 2);
     push(&p, 11);
     printf("\nOriginal Linked List:\n");
     printList(p);

     node *q;
     q = p->next->next;
     delete_node(&q);
     printf("\nAfter deletion...\n");
     printList(p);
     printf("\n");

     return 0;
} 