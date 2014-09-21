#include <iostream>
#include <cstdlib>
#include <new>

#define SIZE 20
#define MAX 500

using namespace std;

void display(int *arr, int len)
{
    int k;
    for(k = 0; k<len; k++)
    {
        cout<<arr[k]<<" ";
    }
    cout<<endl;
}

void merge(int *arr, int *temp, int low, int pivot, int high)
{
    int l, h, idx;
    l = low;
    idx = low;
    h = pivot+1;
    while((l <= pivot) && (h <= high))
    {
        if(arr[l]<=arr[h])
        {
            temp[idx++] = arr[l++];
        }
        else
        {
            temp[idx++] = arr[h++];
        }
    }
    if(l > pivot)
    {
        while(h<=high)
        {
            temp[idx++] = arr[h++];
        }
    }
    else
    {
        while(l<=pivot)
        {
            temp[idx++] = arr[l++];
        }
    }
    for(l = low; l<=high; l++)
    {
        arr[l] = temp[l];
    }     
}

void merge_sort(int *arr, int *temp, int low, int high)
{
    int pivot;
    if(low < high)
    {
        pivot = (low+high)/2;
        merge_sort(arr,temp,low,pivot);
        merge_sort(arr,temp,pivot+1,high);
        merge(arr,temp,low,pivot,high);
    }
}

int main()
{
    srand (time(NULL));
    int *arr = new int[SIZE];
    cout <<"Enter 15 numbers"<<endl;
    int len = 0;
    while(len < SIZE)
    {
        //cin >> arr[len++];
        arr[len++] = rand()%MAX;
    }
    
    cout<<"Input Array"<<endl;
    display(arr,len);
    
    int *temp = new int[SIZE];
    merge_sort(arr,temp,0,len-1);
    cout<<"Merge Sorted Array"<<endl;
    display(arr,len);
    
    return 0;
} 
