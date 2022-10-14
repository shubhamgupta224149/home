#include<iostream>
using namespace std;
int partition(int arr[] , int start , int end)
{
    int pivot = arr[start];
    int i = start+1;
    int j = end-1;
    while(i<j)
    {
        while(arr[i] <= pivot)
        i++;
        while(arr[j] > pivot)
        j++;
        if(i<j)
        swap(arr[i] , arr[j]);
    }
    swap(pivot , arr[j]);
    return j;
}
void quick_sort(int arr[] , int start , int end)
{
    int j;
    if(start<end)
    {
        j = partition(arr , start , end);
        quick_sort(arr, start , j);
        quick_sort(arr , j+1 , end);
    }
}
int main()
{
    int n;
    cout<<"Size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Elements in array : ";
    for(int i = 0;i<n;i++)
    { 
        cin>>arr[i];
    }
    quick_sort(arr , 0 , n);
    cout<<"Sorted array : ";
    for(int i = 0;i<n;i++)
    cout<<arr[i]<<" ";
}
