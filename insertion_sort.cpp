#include<iostream>
using namespace std;
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
    for(int i = 1 ;i<n;i++)
    {
        int temp = arr[i];
        for(int j = i-1 ; j>= -1;j--)
        {
            if(arr[j] > temp)
            {
                arr[j+1] = arr[j];
            }
            else
            {
                arr[j+1] = temp;
                break;
            }
        }
    }
    cout<<"Sorted array : ";
    for(int i = 0;i<n;i++)
    cout<<arr[i]<<" ";
}
