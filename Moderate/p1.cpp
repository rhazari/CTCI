#include <iostream>

using namespace std;

void display(int a, int b)
{
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
}

int main()
{
    int a, b;
    cout<<"Enter 2 numbers"<<endl;
    cin >> a >> b;
    
    display(a,b);
    
    //Swap
    cout<<"Performing a swap of a and b"<<endl;
    a = a+b;
    b = a-b;
    a = a-b;
    display(a,b);
    
    //Swap
    cout<<"Performing a swap of a and b again..."<<endl;
    a = a^b;
    b = a^b;
    a = a^b;
    display(a,b);
    return 0;
}
