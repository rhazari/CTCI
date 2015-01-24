#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    
    int k, count_zeros = 0;
    for(k = 5; num/k > 0; k *= 5)
    {
        count_zeros += num/k;
    }
    
    cout<<"Number of trailing zeros of "<<num<<"! is "<<count_zeros<<endl;
    
    count_zeros  = 0;
    int temp;
    for(k= 5; k < num; k += 5)
    {
        temp = k;
        while(temp%5 == 0)
        {
            count_zeros += 1;
            temp /= 5;
        }
    }
    cout<<"Number of trailing zeros of "<<num<<"! is "<<count_zeros<<endl;
    return 0;
}
