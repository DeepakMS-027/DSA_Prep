#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(vector <int>&arr,int n,int m,int mid)
{
    int cow=1;
    int laststallpos=arr[0];
    for (int i = 1; i < n; i++)
    {
        if((arr[i]-laststallpos)>=mid)
        {
            cow++;
            laststallpos=arr[i];
        }
        if(cow==m)
        {
            return true;
        }
    }
    return false;
    
}

int cow(vector <int> &arr,int n, int m)
{
    sort(arr.begin(),arr.end());
    int start =1;
    int ans =-1;
    int end=arr[n-1]-arr[0];
    for (;start<=end;)
        {
            int mid=start+(end-start)/2;
            if(isPossible(arr,n,m,mid))
            {
                ans=mid;
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return ans;
}
int main()
{
vector<int>nums={1,2,6,4,9};
cout<<cow(nums,5,3);
return 0;
}