
#include <iostream>
#include <cstdlib>
#include <algorithm>

#define SIZE 10

using namespace std;

typedef struct node{
    int value;
    struct node* left;
    struct node* right;
}
node;

typedef struct l_node
{
    int data;
    struct l_node* next;
}
l_node;

l_node *adj_List[SIZE];

void array_to_tree(struct node **root, int *arr, int left, int right)
{
	if(left <= right)
	{
	    int mid = (left+right)/2;
	    (*root) = (node*)malloc(sizeof(node));
	    (*root)->value = arr[mid];
	    node *ptr = (*root);
	    array_to_tree(&(ptr->left),arr,left,mid-1);
	    array_to_tree(&(ptr->right),arr,mid+1,right);
	}
	//return root;
}

int get_height(struct node *ptr)
{
    if(ptr == NULL)
        return 0;
    int left_ht, right_ht;
    left_ht = get_height(ptr->left);
    right_ht = get_height(ptr->right);
    
    return 1+max(left_ht,right_ht);    
}

void insert(struct node *ptr)
{
    int level = get_height(ptr);
    l_node *newptr = (l_node*)malloc(sizeof(l_node));
    newptr->data = ptr->value;
    if(adj_List[level] == NULL)
    {
        adj_List[level] = newptr;
    }
    else
    {
        l_node* temp = adj_List[level];
        while(temp->next != NULL)
        {
            temp = temp->next;  
        } 
        temp->next = newptr;
    }
}

void inorder(node **root)
{
	node *ptr = (*root);
    if(ptr != NULL)
    {
        inorder(&(ptr->left));
        cout<<ptr->value<<" ";
        insert(ptr);
        inorder(&(ptr->right));
    }
}

int main()
{
 	int arr[] = {3,5,8,19,6,4,11}; 
	 
    node *root = NULL;
    array_to_tree(&root,arr,0,6);
    
    int k;
    for(k = 1; k < SIZE; k++)
    {
        adj_List[k] = NULL;
    }
    cout<<"Inorder BST traversal\n";
    inorder(&root);
    cout<<"\n";
    
    for(k = 1; k<SIZE; k++)
    {
        l_node *ptr = adj_List[k];
        while(ptr != NULL)
        {
            cout<<ptr->data<<" ";
            ptr = ptr->next;
        }
        cout<<endl;
    }

    return 0;
}
