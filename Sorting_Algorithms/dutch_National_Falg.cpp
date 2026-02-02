#include<iostream>
#include<vector>
using namespace std;

void dutchNationalFlag(vector <int> &arr)
{
    int mid=0,low=0;
    int high=arr.size()-1;

    for(;mid<=high;)
    {
        if (arr[mid]==0)
        {
            swap(arr[low],arr[mid]);
            low++;
            mid++;kfkf
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(arr[high],arr[mid]);
            high--;
        }
    }
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
    vector<int> arr={2,1,2,1,2,0,0,1,0};
    dutchNationalFlag(arr);
    display(arr);
return 0;
}