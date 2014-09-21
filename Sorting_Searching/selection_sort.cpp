#include <iostream>
#include <new>

#define SIZE 10
using namespace std;

void insertion_sort(int *arr, int len)
{
	int j, k, idx, temp;
	int min, flag;
	for(j = 0; j < len; j++)
	{
		min = 10000;
		flag = 0;
		for(k = j; k < len; k++)
		{
			if(arr[k] < min)
			{
				min = arr[k];
				idx = k;
				flag = 1;
			}
		}
		if(flag)
		{
			temp = arr[j];
			arr[j] = arr[idx];
			arr[idx] = temp;
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
	insertion_sort(arr,k);
	
	cout<<"Selection sorted array"<<endl;
	display(arr,k);	
	return 0;
}
