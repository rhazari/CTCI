//Program to find the in-order successor a binary search tree
#include <iostream>
#include <cstdlib>

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

void inorder_successor(struct node *root, struct node *ptr)
{
    if(ptr->right!= NULL)
    {
        ptr = ptr->right;
        while(ptr->left != NULL)
        {
            ptr = ptr->left;
        }
        cout << ptr->value<<endl;
    }
    else
    {
        while(root != NULL && root != ptr)
        {
            if(root->value < ptr->value && root->right != NULL)
            {
                root = root->right;
            }
            else if(root->left->value > ptr->value && root->left != NULL)
            {
                root = root->left;
            }
            else
            {
                break;
            }
        }
        if(root->value > ptr->value)
            cout<<root->value<<endl;
        else
            cout<<"No successor present"<<endl;
    }
    
}

int main()
{
 	//int arr[] = {3,5,8,19,6,4,11};
 	int arr[] = {1,3,5,7,9,11,13}; 
	 
    node *root = NULL;
    array_to_tree(&root,arr,0,6);
    
    cout<<"Inorder BST traversal\n";
    inorder(&root);
    cout<<"\n";
    
    inorder_successor(root,root->right->left);
    inorder_successor(root,root->left->right);
    inorder_successor(root,root->right->right);
    

    return 0;
}
