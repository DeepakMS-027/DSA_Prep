#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> data(vector<int>stock)
{
  stack<int>span;
  vector<int>ans;
  for(int i=0;i<stock.size();i++)
  {
    cout<<"ok";
    if (i==0)
    {
      ans[0]=1;
      span.push(1);
    }
    for(int j=0;j<i;j++)
    {
      if(stock[span.top()]<=stock[i])
      {
        span.pop();
        break;
      }else{
        ans[i]=i-span.top();
        span.push(i);
      }
      break;
    }

  }
  return ans;

}

int main()
{
  vector<int>stock={100,80,60,70,60,75,80};

  vector<int>ans=data(stock);

  for(int i=0;i>ans.size();i++)
  {
    cout<<ans[i];
  }

return 0;
}