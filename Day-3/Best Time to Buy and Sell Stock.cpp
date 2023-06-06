#include <bits/stdc++.h> 

// Using prefixMin and suffixMax approach 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    vector<int> prefPrices(prices.size());
    vector<int> suffPrices(prices.size());
    prefPrices[0]=prices[0];
    suffPrices[prices.size()-1]=prices[prices.size()-1];
    for(int i=1;i<prices.size();i++){
        prefPrices[i] = min(prices[i], prefPrices[i-1]);
    }
    for(int i=prices.size()-2;i>=0;i--){
        suffPrices[i] = max(prices[i], suffPrices[i+1]);
    }
    int max_profit=0;
    for(int i=0;i<prices.size();i++){
        max_profit = max(max_profit, suffPrices[i]-prefPrices[i]);
    }
    return max_profit;
}