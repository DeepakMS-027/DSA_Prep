#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int>TwoSum(vector<int>&nums,int target){
  unordered_map<int,int>map;
  int first,second;

  for(int i=0;i<nums.size();i++)
  {
    first=nums[i];
    second=target-first;
    if(map.find(second)!=map.end())
    {
      return {i,map[second]};
    }
    map[first]=i;
  }
  return {-1};
}
void display(vector<int>&arr)
{
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<",";
    }
}

int main(){
  vector<int>nums={1,2,7,11,15};
  vector<int>ans=TwoSum(nums,9);
  display(ans);
  return 0;
}
