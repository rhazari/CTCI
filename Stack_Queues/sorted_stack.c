//Program for a sorted stack with display (peek()) function
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node* next;
}
node;

void peek(struct node* ptr)
{
	while(ptr)
	{
		printf("%d ",ptr->data);
		ptr = ptr->next;
	}
	printf("\n");
}

void push(struct node** head, int value)
{
	node* newptr = (node*)malloc(sizeof(node));
	newptr->data = value;
	newptr->next = NULL;

	if((*head) == NULL || value < (*head)->data)
	{
		newptr->next = (*head);
		(*head) = newptr;
	}
	else
	{
		node *ptr, *prev;
		ptr = (*head);
		prev = NULL;
		while(ptr->data < value && ptr->next != NULL)
		{
			prev = ptr;
			ptr = ptr->next;
		}
		if(ptr->data < value && ptr->next == NULL)
		{
			ptr->next = newptr;
		}
		else
		{
			prev->next = newptr;
			newptr->next = ptr;
		}
	}
}

int isEmpty(struct node** head)
{
	if((*head)== NULL)
		return 0;
	else
		return 1;
}

void pop(struct node** head)
{
	if(isEmpty(head))
	{
		printf("Element popped: %d\n",(*head)->data);
		node *temp = (*head);
		(*head) = (*head)->next;
		free(temp);
	}
	else
	{
		printf("Stack is empty\n");
	}
}

int main()
{
	node *head = NULL;
	push(&head, 11);
	push(&head, 14);
	push(&head, 13);
	push(&head, 9);
	push(&head, 7);
	push(&head, 21);
	push(&head, 17);
	push(&head, 5);
	
	peek(head);

	pop(&head);
	pop(&head);
	peek(head);

	pop(&head);
	pop(&head);
	pop(&head);
	pop(&head);
	pop(&head);
	pop(&head);
	pop(&head);
	pop(&head);
	return 0;
}
