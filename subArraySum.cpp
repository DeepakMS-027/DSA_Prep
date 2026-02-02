#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int subArraySum(vector<int>&nums,int target){

  int count=0;
  int i=0;
  while (i<nums.size())
  {
    int val=0;
    for (int j = i; j < nums.size(); j++)
    {
      val=val+nums[j];
      if(val == target)
      {
        count++;
      }
    }
    i++;
  }
  return count;
  
}


int main(){
  vector<int>nums={9,4,20,3,10,5};
  int ans=subArraySum(nums,33);
  cout<<ans;
  return 0;
}