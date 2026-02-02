#include<iostream>
#include<vector>
using namespace std;

int kthSmallest(vector<int> &arr, int k) {
     
    int val=INT_MIN;
        for(int i =0;i<k;i++)
    {   
        int min=INT_MAX;   
        for(int j=0;j<arr.size();j++)
        {
            if(arr[j]<min && arr[j]>val){
                min=arr[j];
                }
            
        }
        val=min;
    }
    return val;
        
    }
int main()
{
    vector<int> arr = {2, 3, 1, 20, 15};
    int k = 4; 
    int result = kthSmallest(arr, k);
    cout << result << endl;
return 0;
}