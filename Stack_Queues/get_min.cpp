//Stack which gives the min value in O(1) time
#include <iostream>
#include <stack>

using namespace std;

stack<int> s1;
stack<int> s2;

int ref = 100000;

void push(int value)
{
    s1.push(value);
    if(value < ref)
    {
        s2.push(value);
        ref = value;
    }
    else
        s2.push(ref);   
}

void pop()
{
    if(!s1.empty())
    {
        cout<<"Element popped: "<<s1.top()<<endl;
        s1.pop(); s2.pop();
    }
    else
        cout <<"Stack Empty"<<endl;
}

void min()
{
    cout<<"Minimum element in stack: "<<s2.top()<<endl;
}

int main()
{
    int val;
    int read = 1, ch;
    while(read)
    {
        cout<<"1 - Push"<< endl;
        cout<<"2 - Pop"<< endl;
        cout<<"3 - Min"<< endl;
        cout<<"Default - Exit"<< endl;
        cin >> ch;
        switch(ch)
        {
            case 1:
                cout<<"Enter a number"<<endl;
                cin >> val;
                push(val);
                break;
             case 2:
                pop();
                break;
             case 3:
                min();
                break;
             default:
                read = 0;
                break;
        }
    }
    return 0;
}

