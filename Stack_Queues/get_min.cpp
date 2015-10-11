//Stack which gives the min value in O(1) time
#include <iostream>
#include <stack>

using namespace std;
int ref = 100000;

class MyStack{
    stack<int> s1, s2;
public:
    void push(int value){
        s1.push(value);
        if(value < ref){
            s2.push(value);
            ref = value;
        }
        else{
            s2.push(ref);
        }
    }

    void pop(){
        if(!s1.empty()){
            cout<<"Element popped: "<<s1.top()<<endl;
            s1.pop(); s2.pop();
        }
        else{
            cout <<"Stack Empty"<<endl;
        }
    }

    void front(){
        cout<<"Top element of the stack: "<<s1.top()<<endl;
    }

    void min(){
        cout<<"Minimum element in stack: "<<s2.top()<<endl;
    }    
};


int main()
{
    int val;
    int read = 1, ch;
    class MyStack S;
    while(read)
    {
        cout<<"1 - Push"<< endl;
        cout<<"2 - Pop"<< endl;
        cout<<"3 - Front"<<endl;
        cout<<"4 - Min"<< endl;
        cout<<"Default - Exit"<< endl;
        cin >> ch;
        switch(ch)
        {
            case 1:
                cout<<"Enter a number"<<endl;
                cin >> val;
                S.push(val);
                break;
            case 2:
                S.pop();
                break;
            case 3:
                S.front();
                break;
            case 4:
                S.min();
                break;
            default:
                read = 0;
                break;
        }
    }
    return 0;
}
