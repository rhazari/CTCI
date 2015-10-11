//Program for a Queue using two Stacks
#include <iostream>
#include <stack>

using namespace std;

class MyQueue{
	stack<int> s1, s2;
public:
	void push(int value){
		if(s2.empty()){
			s1.push(value);
		}
		else
		{	
			while(!s2.empty()){
				s1.push(s2.top());
				s2.pop();
			}
			s1.push(value);
		}
	}

	void remove(){
		while(!s1.empty()){
			s2.push(s1.top());
			s1.pop();
		}
		if(!s2.empty()){
			cout <<"Element removed: "<<s2.top()<<endl;
			s2.pop();
		}
		else{
			cout<<"Queue is empty"<<endl;
		}
	}
};


int main()
{
	int ch, num, read = 1;
	MyQueue Q;
	
	while(read)
	{
		cout<<"1- Push"<<endl;
		cout<<"2- Remove"<<endl;
		cout<<"Default-Exit"<<endl;
		cin >> ch;
		switch(ch)
		{
			case 1:
				cout<<"Enter a value"<<endl;
				cin >> num;
				Q.push(num);
				break;
			case 2:
				Q.remove();
				break;
			default:
				read = 0;
				break;
		}
	}
	
	return 0;
}