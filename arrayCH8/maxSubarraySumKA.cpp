//Kadane,s Algorithm
#include<iostream>
using namespace std;

int maxSubarrSum(int arr[],int size)
{
    int maxsum=INT_MIN;
    int currentSum=0;
    for(int i=0;i<size;i++)
    {
        currentSum+=arr[i];
        maxsum=max(maxsum,currentSum);
        if(currentSum<0)
        {
            currentSum=0;
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