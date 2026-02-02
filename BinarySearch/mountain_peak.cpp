#include<iostream>
#include<vector>
using namespace std;

int binearSearch(vector <int> &arr)
{
    int start=1;
    int end=arr.size()-2;
    int mid=0;
    for (;start<=end;)
    {
        mid=start+(end-start)/2;
        if(arr[mid-1]<arr[mid]&&arr[mid]>arr[mid+1])
        {
            return arr[mid];
        }
        else if(arr[mid-1]<arr[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return -1;
}
int main()
{
    vector <int> arr ={0,10,5,2};
    cout<<binearSearch(arr);
return 0;
}