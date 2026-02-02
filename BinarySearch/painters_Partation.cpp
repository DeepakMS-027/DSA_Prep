#include<iostream>
#include<vector>
using namespace std;
bool isVal(vector<int>nums,int n,int m,int mid)
{
    int painters=1;
    int time=0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i]>mid)
        {
            return false;
        }
        if(time+nums[i]<=mid)
        {
            time+=nums[i];
        }
        else{
            painters++;
            time=nums[i];
        }
        
    }
    return painters<=m;
}
int pantersPartation(vector<int> nums,int n,int m)
{
    int sum=0;
    int maximum=INT_MIN;
    for(int i =0;i<n;i++)
    {
        sum += nums[i];
        maximum=max(maximum,nums[i]);
    }
    int st=maximum;
    int end=sum;
    int ans =-1;
    for (;st<=end;)
    {
        int mid=st+(end-st)/2;
        if (isVal(nums,n,m,mid))
        {
            ans =mid;
            end=mid-1;
        }
        else{
            st=mid+1;
        }
        
    }
    return ans;
}

int main()
{
vector<int>nums={40,30,10,20};

cout<<pantersPartation(nums,4,2);
return 0;
}