#include<iostream>
#include<vector>
using namespace std;
void selectionSort(vector<int>&arr)
{
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        int current=arr[i];
        int previous=i-1;
        for (;previous>=0 && arr[previous]>current;previous--)
        {
            arr[previous+1]=arr[previous];
        }
        arr[previous+1]=current;

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