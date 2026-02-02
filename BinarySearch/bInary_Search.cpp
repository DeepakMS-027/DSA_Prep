#include<iostream>
#include<vector>
using namespace std;

int binearSearch(vector <int> &arr,int target)
{
    int start=0;
    int end=arr.size()-1;
    int mid=0;
    for (;start<=end;)
    {
        mid=(start+end)/2;
        if(target>arr[mid])
        {
            start=mid+1;
        }
        else if(target<arr[mid])
        {
            end=mid-1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
int main()
{
    vector <int> arr ={-1,0,3,4,5,9,12};
    cout<<binearSearch(arr,12);
return 0;
}