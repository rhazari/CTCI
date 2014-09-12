//Program to detect and find the position of 
//a loop in a link list
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

void find_loop_pos(struct node* head)
{
	node *slow, *fast;
	slow = fast = head;
	while(fast)
	{
		slow = slow->next;
		fast = fast->next->next;
		if(slow == fast)
		{
			printf("Loop exists\n");
			break;
		}
	}
	slow = head;
	while(slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}
	printf("Loops starts at: %d\n",slow->data);
	printf("Loops starts at: %d\n",fast->data);	
	
}

int main()
{
    node *head = NULL;
    push(&head,11);
	 push(&head,23);
	 push(&head,13);
	 push(&head,16);
	 push(&head,7);
	 push(&head,5);
	 push(&head,9);
	 push(&head,21);
	 push(&head,14);
	 push(&head,19);
        
    print_list(head);

	 node* temp = head;
	 while(temp->next != NULL)
	 {
	 	 temp = temp->next;
	 }
	 temp->next = head->next->next;
  	 //print_list(head);
	 find_loop_pos(head);
    
    return 0;
}
