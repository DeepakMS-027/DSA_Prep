#include<iostream>
using namespace std;

void pairSum(int arr[],int size,int key)
{
    int st=0;
    int end=size;
    for(int i=0;i<size;i++)
    {
        if(arr[st]+arr[end]>key)
        {
            end--;
        }
        else if(arr[st]+arr[end]<key)
        {
            st++;
        }
        else
        {
            cout<<st<<" "<<end<<endl;
            return;
        }

    }
}
int main()
{
    int arr[]={2,7,11,15};
    pairSum(arr,4,17);
return 0;
}