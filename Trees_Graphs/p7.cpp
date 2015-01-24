#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

typedef struct node{
    int value;
    struct node* left;
    struct node* right;
}
node;

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

void inorder(node **root)
{
	node *ptr = (*root);
    if(ptr != NULL)
    {
        inorder(&(ptr->left));
        cout<<ptr->value<<" ";
        inorder(&(ptr->right));
    }
}

int main()
{
 	int arr[] = {3,5,8,19,6,4,11}; 
	 
    node *root = NULL;
    array_to_tree(&root,arr,0,6);
    
    cout<<"Inorder BST traversal\n";
    inorder(&root);
    cout<<"\n";

    return 0;
}
