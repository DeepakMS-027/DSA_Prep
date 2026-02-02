#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void next_permutation(vector<int>&arr)
{
    int piovt =-1,n=arr.size();

    for (int i=n-1;i>=0;i--)
    {
        if(arr[i]<arr[i+1])
        {
            piovt=i;
            break;
        }
    }
    if(piovt=-1)
    {
        reverse(arr.begin(),arr.end());
        return;
    }
     
    for(int i=n-1;i>piovt;i--)
    {
        if(arr[i]>arr[piovt])
        {
            swap(arr[i],arr[piovt]);
            break;
        }
    }
    reverse(arr.begin()+ piovt+1,arr.end());

} 

void display(vector<int>&arr)
{
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<",";
    }
}

int main()
{
    vector<int> arr={1,2,3};
    next_permutation(arr);
    display(arr);
return 0;
}