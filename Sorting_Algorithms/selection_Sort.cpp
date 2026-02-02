#include<iostream>
#include<vector>
using namespace std;
void selectionSort(vector<int>&arr)
{
    int n=arr.size();
    for(int i=0;i<n-1;i++)
    {
        int SI=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[SI])
            {
                SI=j;
            }
        }
        swap(arr[i],arr[SI]);
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
    selectionSort(arr);
    display(arr);
return 0;
}