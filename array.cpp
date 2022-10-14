#include<iostream>
using namespace std;
void merge(int arr[] , int begin , int end , int mid)
{
    int b [ end - begin +1];
    int i = begin ;
    int j = mid ;
    int k = 0;
    while(i<= mid -1 && j <= end)
    {
        if(arr[i] < arr[j])
        b[k++] = arr[i++];
        else
        b[k++] = arr[j++];
    }
    while(i<= mid-1)
    b[k++] = arr[i++];
    while(j<=end)
    b[k++] = arr[j++];
    for(int l = 0;l<k;l++)
    arr[begin++]  = b[l];
}
int main()
{
    int arr[5] = { 5,4,3,2,1};
    for(int j = 0; j<5; j = j+2)
    {
        int start = j , end = 2+j-1 , mid = 2/2 + start;
        if(end>=5)
        end = 5-1;
        merge(arr, start , end , mid);
    }
    for(int i = 0;i<5;i++)
    cout<<arr[i]<<" ";
}