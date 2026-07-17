#include<bits/stdc++.h>

using namespace std;
int MaxProductSubarr(vector<int>&a,int n){
    int MaxProd = INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int product = 1;
            for(int k=i;k<j;k++){
                product = product*a[k];
                MaxProd = max(MaxProd,product);
            }
        }
    }
    return MaxProd;
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << MaxProductSubarr(a,n);
    return 0;
}

// time coplexity
// TC ~ O(n^3)

// space complexity
// SC = O(1)