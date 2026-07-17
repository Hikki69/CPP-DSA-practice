#include<bits/stdc++.h>

using namespace std;

int numOfGasStReq(long double dist,vector<int>&a,int n){
    int cnt = 0;
    for(int i = 1;i<n;i++){
        int numInBetween = (a[i]-a[i-1])/dist;
        if((a[i]-a[i-1])/dist == numInBetween*dist){
            numInBetween--;
        }
        cnt += numInBetween;
    }
    return cnt;
}

long double minimisemaxDist(vector<int>&a,int n,int k){
    long double low = 0, high = 0;
    for(int i = 0;i<n;i++){
        high = max(high,(long double)(a[i+1]-a[i]));
    }

    long double diff = 1e-6;
    while(high - low > diff){
        long double mid = (low + high)/(2.0);
        int cnt = numOfGasStReq(mid,a,n);
        if (cnt >k){
            low = mid;
        }
        else{
            high = mid;
        }
    }
    return high;
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }
    int k ;
    cin >> k;
    
    cout << minimisemaxDist(a,n,k);

    return 0;
}

// time complexity 
// TC = O(nlogn)+O(n)

// space complexity
// SC= O(1)