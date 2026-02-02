#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>&arr1,vector<int>&arr2,int m,int n)
{
    int k=m+n-1;
    int i=m-1,j=n-1;
    for (;i >= 0 && j >= 0;)
    {
        if(arr1[i]>=arr2[j])
        {
            arr1[k]=arr1[i];
            i--;
            k--;
            
        }
        else
        {
            arr1[k]=arr2[j];
            j--;
            k--;
            
        }
    }
    while (j >= 0) {
        arr1[k] = arr2[j];
        j--;
        k--;
    }
   
}

void display(vector<int>&arr1)
{
    for(int i=0;i<arr1.size();i++)
    {
        cout<<arr1[i]<<",";
    }
}

int main()
{
    vector<int> arr1={0};
    vector<int> arr2={1};
    merge(arr1,arr2,0,1);
    display(arr1);
return 0;
}