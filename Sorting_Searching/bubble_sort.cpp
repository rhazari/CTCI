#include <iostream>
#include <new>

#define SIZE 10

using namespace std;

void bubble_sort(int *arr, int len)
{
	int j, k, temp;
	for(j = 0; j < len; j++)
	{
		for(k = 0; k < len-j-1; k++)
		{
			if(arr[k] > arr[k+1])
			{
				temp = arr[k];
				arr[k] = arr[k+1];
				arr[k+1] = temp;
			}
		}
	}
}

void display(int *arr, int len)
{
	int k;
	for(k = 0; k<len; k++)
	{
		cout<<arr[k]<<" ";
	}
	cout<<endl;
}

int main()
{
	int *arr = new int[SIZE];
	cout << "Enter 10 numbers "<<endl;
	int k = 0;
	while(k < SIZE)
	{
		cin >> arr[k++];
	}
	
	cout<<"Array of number"<<endl;
	display(arr,k);	
	bubble_sort(arr,k);
	
	cout<<"Bubble sorted array"<<endl;
	display(arr,k);	
	return 0;
}
