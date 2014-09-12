//Program to partition a link list around a given value
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
    node* newptr = (node*)malloc(sizeof(node));
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

struct node* split(struct node* head, int value)
{
	node *p1, *p2, *ptr;
	p1 = NULL;
	p2 = NULL;
	ptr = head;
	while(ptr)
	{
		if(ptr->data < value)
			push(&p1,ptr->data);
		else
			push(&p2,ptr->data);
		ptr = ptr->next;
	}

	ptr = p1;
	while(ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = p2;
	return p1;
	
}


int main()
{
    node* head = NULL;
    push(&head,5);
    push(&head,3);
    push(&head,9);
    push(&head,11);
    push(&head,14);
    push(&head,7);
    push(&head,8);
    push(&head,7);
    push(&head,12);
    push(&head,16);
    
    print_list(head);
		
	int key = 9;		
	node* h2 = split(head,key);
	print_list(h2);
    
    return 0;
}
