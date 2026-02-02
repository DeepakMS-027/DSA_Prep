#include<iostream>
#include<vector>
using namespace std;
bool isVal(vector<int>nums,int n,int m,int mid)
{
    int stu=1;
    int page=0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i]>mid)
        {
            return false;
        }
        if(page+nums[i]<=mid)
        {
            page+=nums[i];
        }
        else{
            stu++;
            page=nums[i];
        }
        
    }
    return stu>m ? false:true;
}
int bookAllocation(vector<int> nums,int n,int m)
{
    int sum=0;
    for(int i =0;i<n;i++)
    {
        sum += nums[i];
    }
    int st=0;
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
vector<int>nums={2,1,3,4};

cout<<bookAllocation(nums,4,2);
return 0;
}