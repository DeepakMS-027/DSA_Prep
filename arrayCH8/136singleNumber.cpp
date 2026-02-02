#include<iostream>
using namespace std;

int singlenum(int arr[],int size)
{
    int a=0;
    for(int i=0;i<size;i++)
    {
        a=a^arr[i];
    }
    return a;
}
int main()
{
    int arr[]={4,1,2,1,2};
    cout<<singlenum(arr,5);
    return 0;
}