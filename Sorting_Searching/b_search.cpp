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

int binary_search(int *arr, int num, int low, int high)
{
    if(low > high)
        return -1;
    int mid = (low+high)/2;
    if(arr[mid] < num)
        binary_search(arr,num,mid+1,high);
    else if(arr[mid] > num)
        binary_search(arr,num,low,mid-1);
    else
        return mid;
}

int main()
{
    srand (time(NULL));
	int *arr = new int[SIZE];
	cout << "Enter 10 numbers "<<endl;
	int k = 0;
	while(k < SIZE)
	{
		//cin >> arr[k++];
		arr[k++] = rand()%MAX;
	}
	
	cout<<"Array of number"<<endl;
	display(arr,k);	
	insertion_sort(arr,k);
	
	cout<<"Selection sorted array"<<endl;
	display(arr,k);
	
	int num;
	cout <<"Enter a number to search"<<endl;
	cin >> num;
	if(binary_search(arr,num,0,k) == -1)
	    cout<<"Number not found"<<endl;
	else
	    cout<<"Number found"<<endl;
		
	return 0;
}
