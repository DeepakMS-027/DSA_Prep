#include<iostream>
using namespace std;

int main()
{
int num[]={1,10,20,3,44,-22,11};
int max=INT_MAX;
for(int i=0;i<7;i++)
{
    if(max>num[i])
    {
        max=num[i];
    }
}
cout<< max;

return 0;
}