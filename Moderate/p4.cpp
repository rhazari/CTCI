#include <iostream>

using namespace std;

int sign(int val)
{
    return (val >> 31 & 1)^1;
}

int flip_bit(int val)
{
    return 1^val;
}

int main()
{
    int a, b;
    cout <<"Enter 2 numbers"<<endl;
    cin >> a >> b;
    
    int k, q;
    k = sign(a-b);
    q = flip_bit(k);
    
    cout<<"The greater number is: "<<k*a+q*b<<endl;
    
    return 0;
}
