#include <iostream>

using namespace std;

int binary_search_rotated(int *arr, int value, int left, int right)
{
    int mid = (left+right)/2;
    if(arr[mid] == value)
        return 1;
    if(left > right)
        return 0;
        
    if(arr[left] < arr[mid])
    {
        if(value >= arr[left] && value <= arr[mid])
        {
            return binary_search_rotated(arr,value,left,mid);
        }
        else
        {
            return binary_search_rotated(arr,value,mid,right);
        }
    }
    else if(arr[left] > arr[mid])
    {
        if(value >= arr[mid] && value <= arr[right])
        {
            return binary_search_rotated(arr,value,mid,right);
        }
        else
        {
            return binary_search_rotated(arr,value,left,mid);
        }
    }
    return 0;    
}

int main()
{
    int value, len = 10;
    int arr1[] = {11,13,15,17,21,3,5,8,9,10};
    int arr2[] = {15,17,21,3,5,8,9,10,11,13};

    cout<<"Enter element to search"<<endl;
    cin >> value;

    if(binary_search_rotated(arr2,value,0,len-1))
    {
        cout <<"Element found"<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }
    cout<<endl;
    return 0;
}
