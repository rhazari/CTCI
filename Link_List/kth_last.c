#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
}
node;

void push(struct node** head, int value)
{
    node* newptr = malloc(sizeof(node));
    newptr->data = value;
    newptr->next = (*head);
    (*head) = newptr;
}

void print_list(struct node* head)
{
    while(head != NULL)
    {
        printf("%d\t",head->data);
        head = head->next;
    }
    printf("\n");
}

void kth_node(struct node* head, int pos)
{
    node *ptr, *cur;
    ptr = head;
    cur = head;
    while(pos)
    {
        ptr = ptr->next;
        --pos;
    }
    
    while(ptr)
    {
        ptr = ptr->next;
        cur = cur->next;
    }
    printf("%d\n", cur->data);
}

int main()
{
    node* head = NULL;
    push(&head,5);
    push(&head,3);
    push(&head,9);
    push(&head,11);
    push(&head,4);
    push(&head,3);
    push(&head,8);
    push(&head,7);
    push(&head,5);
    push(&head,11);
    
    print_list(head);
    
    int k = 3;
    kth_node(head,k);
    
    return 0;
}
