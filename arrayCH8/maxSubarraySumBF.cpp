#include<iostream>
using namespace std;

int maxSubarrSum(int arr[],int size)
{
    int maxsum=INT_MIN;
    for(int i=0;i<size;i++)
    {
        int currentSum=0;
        for(int j=i;j<size;j++)
        {
            currentSum+=arr[j];
            maxsum=max(currentSum,maxsum);
        }
    }
    return maxsum;
}
int main()
{
    int arr[]={3,-4,5,4,-1,7,-8};
    cout <<maxSubarrSum(arr,7);
return 0;
}