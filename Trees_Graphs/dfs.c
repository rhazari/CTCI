#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

typedef struct node
{
	int data;
	int visit;
	struct node* next;
}
node;

void dfs_graph(struct node** arr, int val)
{
	printf("%d ",arr[val]->data);
	arr[val]->visit = 1;
	node* ptr = arr[val];
	while(ptr->next != NULL)
	{
		ptr = ptr->next;
		if(arr[ptr->data]->visit == 0)
		{
			dfs_graph(arr,ptr->data);
		}
	}
}

int main(int argc, char* argv[])
{
	if(argc != 2)
	{
		printf("Enter text file\n");
		return 2;
	}

	char* infile = argv[1];
	FILE* file = fopen(infile,"r");
	if(file == NULL)
	{
		printf("Cannot open file\n");
		return 2;
	}	
		
		
	struct node* arr[SIZE+1];
	int k;
	for(k = 1; k <= SIZE; k++)
	{
		node* ptr = (node*)malloc(sizeof(node));
		ptr->data = k;
		ptr->visit = 0;
		ptr->next = NULL;
		arr[k] = ptr;
	}
	
	int a, b, read = 1;
	while(read)
	{
		if(fscanf(file,"%d %d",&a,&b) < 2)
		{
			read = 0;
			fclose(file);
			break;
		}
		node* newptr = (node*)malloc(sizeof(node));
		newptr->data = b;
		newptr->next = NULL;
		
		node* ptr = arr[a];
		while(ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = newptr;
	}

	for(k = 1; k <= SIZE; k++)
	{
		node *ptr = arr[k];
		while(ptr)
		{
			printf("%d \t",ptr->data);
			ptr = ptr->next;
		}
		printf("\n");
	}
	
	printf("Depth First Search\n");
	dfs_graph(arr,1);
	printf("\n");

	//fclose(file);

	return 0;
}
