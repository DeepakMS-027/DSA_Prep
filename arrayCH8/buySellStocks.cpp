#include<iostream>
using namespace std;

int buyandsell(int prices[],int size)
{
    int maxProfit = 0, bestBuy = prices [0];
for(int i=1; i < size; i++) {
if(prices [i] > bestBuy) {
maxProfit = max(maxProfit, prices [i]-bestBuy);
}
bestBuy = min(bestBuy, prices [i]);
}
return maxProfit;
}
int main()
{
    int Stock[]={2,4,1};
    cout<<buyandsell(Stock,3);

return 0;
}