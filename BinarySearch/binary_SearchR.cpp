#include<iostream>
#include<vector>
using namespace std;

int BSR(vector <int> &arr,int target,int st,int end)
{
    int mid = st+(end-st)/2;
    if (target>arr[mid])
    {
        return BSR(arr,target,mid+1,end);
    }
    else if(target<arr[mid])
    {
        return BSR(arr,target,st,mid-1);
    }
    else
    {
        return mid;
    }
    return -1;
}
int binearSearch(vector <int> &arr,int target)
{
    int start=0;
    int end=arr.size()-1;
    return BSR(arr,target,start,end);
}

int main()
{
    vector <int> arr ={-1,0,3,4,5,9,12};
    cout<<binearSearch(arr,12);
return 0;
}