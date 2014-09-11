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

void remove_duplicate(struct node** head)
{
    node *ptr, *prev, *cur, *temp;
    ptr = (*head);
    prev = NULL;
    
    while(ptr->next != NULL)
    {
        cur = ptr;
        while(cur->next != NULL)
        {
            prev = cur;
            cur = cur->next;
            if(cur->data == ptr->data)
            {
                temp = cur;
                prev->next = cur->next;
                if(cur->next != NULL)
                    cur = cur->next;
                free(temp);   
            }
        }
        //print_list(*head);
        ptr = ptr->next;
    }
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
    
    remove_duplicate(&head);
    print_list(head);
    
    return 0;
}
