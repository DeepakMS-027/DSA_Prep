#include<iostream>
using namespace std;

int linearSearch(int nums[],int key, int size)
{
    for(int i=0;i<7;i++)
{
    if(nums[i]==key)
    {
        return i;
    }
}
return -1;
}
int main()
{
int nums[]={1,2,3,4,5,6,7,8,9};
int key=88;
cout << "index is"<<linearSearch(nums,key,9);
return 0;
}