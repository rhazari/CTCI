#include <iostream>
#include <cstdlib>
#include <new>

#define SIZE 10
#define MAX 100
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
    srand (time(NULL));
	int *arr1 = new int[SIZE*2];
	int *arr2 = new int[SIZE];
	cout << "Enter 10 numbers "<<endl;
	int len = 0;
	while(len < SIZE)
	{
		arr1[len] = rand()%MAX;
		arr2[len++] = rand()%MAX;
	}
	
	cout<<"Array 1"<<endl;
	display(arr1,len);	
	insertion_sort(arr1,len);
	
	cout<<"Array 2"<<endl;
	display(arr2,len);	
	insertion_sort(arr2,len);
	
	cout<<"Selection sorted array 1"<<endl;
	display(arr1,len);
	
	cout<<"Selection sorted array 2"<<endl;
	display(arr2,len);
	
	int idx = SIZE*2-1;
	int k1, k2;
	k1 = k2 = len-1;
	while(k2 >= 0)
	{
	    if(arr1[k1] > arr2[k2])
	    {
	        arr1[idx--] = arr1[k1--];
	    }
	    else
	    {
	        arr1[idx--] = arr2[k2--];
	    }
	}
	
	cout<<"Merge sorted array"<<endl;
	display(arr1,SIZE*2);
		
	return 0;
}
