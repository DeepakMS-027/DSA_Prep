#include<iostream>
using namespace std;

int reverse(int arr[],int size)
{
    int j=size;
    for(int i=0;i<size/2;i++)
    { 
        j--;
        swap(arr[j],arr[i]);
    }
    return 0;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    reverse(arr,7);
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}