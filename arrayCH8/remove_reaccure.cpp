#include<iostream>
using namespace std;
void uniqueVal(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        bool isunique=1;
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                isunique=0;
                break;
            }
        }
        if(isunique)
        {
            cout<<arr[i];
        }
    }
}

int main()
{
    int arr[]={1,1,1,1,1,1,1,2,2,2,2,2,2,3,1,2,3,1,1,1,1,4};
    int size=sizeof(arr)/sizeof(int);
    uniqueVal(arr,size);

return 0;
}