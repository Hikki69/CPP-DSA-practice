#include<bits/stdc++.h>

using namespace std;
int MaxProdSubarr(vector<int>&a,int n){
    int maxProd = INT_MIN;
    int prefix =1,suffix = 1;
    for(int i=0;i<n;i++){
        if(prefix == 0) prefix = 1;
        else if(suffix == 0) suffix = 1;
        prefix = prefix*a[i];
        suffix = suffix*a[n-i-1];
        maxProd = max(maxProd,max(prefix,suffix));
    }
    return maxProd;
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << MaxProdSubarr(a,n);
    return 0;
}

// time complexity
// TC = O(n)

// space complexity
// SC = O(1)