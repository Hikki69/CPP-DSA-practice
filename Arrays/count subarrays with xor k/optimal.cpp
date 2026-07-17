#include<bits/stdc++.h>

using namespace std;
int countSubarrWithXOR(vector<int>&a,int n,int k){
    int xr = 0;
    map<int,int>mpp;
    mpp[xr]++; // (0,1)
    int cnt = 0;
    for(int i=0;i<n;i++){
        xr = xr^a[i];
        // for k
        int x = xr^k;
        cnt += mpp[x];
        mpp[xr]++;
    }
    return cnt;
}
int main(){
    int n,k;
    cin >> n >> k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << countSubarrWithXOR(a,n,k);
    return 0;
}

// time complexity
// TC = O(nlogm)

// space complexity
// SC = O(n)