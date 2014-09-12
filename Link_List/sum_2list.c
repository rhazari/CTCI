//Digits of two numbers stored in two link list
//Add the two numbers
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

int get_int(struct node* list)
{
	int len = 0, val = 0;
	node* temp = list;
	while(temp)
	{
		temp = temp->next;
		len++;
	}
	while(list)
	{
		val += pow(10,len-1)*list->data;
		list = list->next;
		len--;
	}
	return val;
}

int sum_list(struct node* l1, struct node* l2)
{
	int n1 = 0, n2 = 0;
	n1 = get_int(l1);
	n2 = get_int(l2);
	printf("1st number: %d\n",n1);
	printf("2nd number: %d\n",n2);
	return n1+n2;	
	
}

int main()
{
    node *h1, *h2;
	 h1 = h2 = NULL;
    push(&h1,5);
    push(&h1,3);
    push(&h1,9);
    
	 push(&h2,6);
    push(&h2,4);
    push(&h2,7);
    
    print_list(h1);
	 print_list(h2);

	 printf("Sum : %d\n",sum_list(h1,h2));
    
    return 0;
}
