#include<iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int>&arr)
{
    int n=arr.size();
    for(int i=0;i<n-1;i++)
    {
        bool isSwap=true;
            for(int j=0;j<n-i-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    swap(arr[j],arr[j+1]);
                }
            }
            if (!isSwap)
            {
                return;
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
    vector<int>arr={4,1,5,2,3};
    bubbleSort(arr);
    display(arr);
return 0;
}