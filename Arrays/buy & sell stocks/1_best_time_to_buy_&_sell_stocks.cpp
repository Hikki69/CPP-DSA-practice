#include<bits/stdc++.h>
// if you are sellling on ith day 
// you buy on the minimum prices from 1st to (i-1)th day.
using namespace std;
int bestTimeToBuyAndSellStocks(vector<int>&prices,int n){
    int mini =prices[0], maxProfit =0;
    for(int i=0;i<n;i++){
        int cost = prices[i]-mini;
        maxProfit= max(maxProfit,cost);
        mini = min(mini , prices[i]);
    }
    return maxProfit;
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << bestTimeToBuyAndSellStocks(a,n);
    return 0;
}

// time complexity 
// TC = O(1)

// space complexity 
// SC = O(1)