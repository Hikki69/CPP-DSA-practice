#include<bits/stdc++.h>

using namespace std;
int maxSubArrSum(vector<int>&a, int n){
    int maxi = INT_MIN;
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n;j++){
            int sum =0;
            for(int k=i;k<j;k++){
                sum += a[k];
                maxi = max(maxi,sum);
            }
        }
    }
    return maxi;
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << maxSubArrSum(a,n);
    return 0;
}

// time omplexity
// TC = O(n^3)

// space complexity
// SC = O(1)