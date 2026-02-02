#include<iostream>
#include<vector>
using namespace std;

int rotatedSortedArray(vector <int> &arr,int target)
{
    int start=0;
    int end=arr.size()-1;
    int mid=0;
    for (;start<=end;)
    {
        mid=start+(end-start)/2;
        if(arr[start]<=arr[mid])
        {
            if (arr[mid]== target)
            {
                return mid;
            }
            if(arr[start]<=target&&target<=arr[mid])
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        else
        {
         if(arr[mid]<=target&&target<=arr[end])
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }   
        }
    }
    return -1;
}
int main()
{
    vector <int> arr ={3,4,5,6,7,0,1,2};
    cout<<rotatedSortedArray(arr,1);
return 0;
}