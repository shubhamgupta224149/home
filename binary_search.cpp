#include<iostream>
using namespace std;
int binary_search(int *a ,int start , int n , int key)
{
    int mid = (n-start+1)/2;
    if(a[start+mid]==key)
    return mid;
    else if(a[start+mid]>key)
    {
        cout<<"a"<<endl;
        binary_search(a , start , mid+1 , key);
    }
    else
    {
        cout<<"d"<<endl;
        binary_search(a , mid+1 ,  , key);
    }

}
int main()
{
    cout<<"c"<<endl;
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int b = binary_search(arr , 0 , 10 , 8);

    cout<<b;
}