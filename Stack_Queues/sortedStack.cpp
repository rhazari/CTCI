#include <iostream>
#include <stack>

using namespace std;

class mySortedStack{
	stack<int> s1, s2;
public:
	void push(int value){
		s1.push(value);
		
	}

	void sort(){
		while(!s1.empty()){
			int tmp = s1.top();
			s1.pop();
			while(!s2.empty() && s2.top() > tmp){
				s1.push(s2.top());
				s2.pop();
			}
			s2.push(tmp);
		}
	}

	void pop(){
		sort();
		if(!s2.empty()){
			cout<<"Element popped: "<<s2.top()<<endl;
			s2.pop();
		}
		else{
			cout<<"Stack is empty"<<endl;
		}
		
	}

	void peek(){
		sort();
		cout<<"Top element: "<<s2.top()<<endl;
	}

	void isEmpty(){
		sort();
		if(s2.empty()){
			cout<<"Stack is empty"<<endl;
		}
		else{
			cout<<"Stack is not empty"<<endl;
		}
	}
};



int main()
{
	int ch, num, read = 1;
	mySortedStack ss;
	
	while(read)
	{
		cout<<"1- Push"<<endl;
		cout<<"2- Pop"<<endl;
		cout<<"3- Peek"<<endl;
		cout<<"4- IsEmpty"<<endl;
		cout<<"Default-Exit"<<endl;
		cin >> ch;
		switch(ch)
		{
			case 1:
				cout<<"Enter a value"<<endl;
				cin >> num;
				ss.push(num);
				break;
			case 2:
				ss.pop();
				break;
			case 3:
				ss.peek();
				break;
			case 4:
				ss.isEmpty();
				break;
			default:
				read = 0;
				break;
		}
	}
	
	return 0;
}