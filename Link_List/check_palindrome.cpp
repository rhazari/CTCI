#include <iostream>
#include <cstdlib>
#include <stack>

using namespace std;

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
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int palindrome_check(struct node* head)
{
    node *ptr = head;
    int flag = 1;
    stack<int> s1;
    while(ptr)
    {
        s1.push(ptr->data);
        ptr = ptr->next;
    }
 
    ptr = head;    
    while(ptr)
    {
        if(ptr->data != s1.top())
        {
            flag = 0;
            break;
        }
        //cout<<ptr->data<<":"<<s1.top()<<endl;
        s1.pop(); ptr= ptr->next;
    }
    return flag;    
}


int main()
{
    node *head = NULL;
    push(&head,5);
    push(&head,7);
    push(&head,9);
    push(&head,10);
    push(&head,9);
    push(&head,7);
    push(&head,5);
    print_list(head);
    if(palindrome_check(head))
        cout<<"A palindrome"<<endl;
    else
        cout<<"Not a palindrome"<<endl;   
        
    return 0;
}
