#include<iostream>
using namespace std;

void pairSum(int arr[],int size,int key)
{
    int ans[2];
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(key == arr[i]+arr[j])
            {
                cout<<i<<j<<endl;
            }
        }
    }
}
int main()
{
    int arr[]={2,7,11,15};
    pairSum(arr,4,17);
return 0;
}