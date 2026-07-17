#include<bits/stdc++.h>

// first find two nearby index
using namespace std;
int KthMissingNum(vector<int>&a,int n,int k){
    int low = 0,high = n-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        int missing = a[mid]-(mid+1);
        if(missing<k) low=mid+1;
        else high = mid-1; 
    }
    return (high+1+k); // return low+k; --> low = high +1
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int k;
    cin >> k;
    cout << KthMissingNum(a,n,k);
    return 0;
}

// time complexity 
// TC = O(log2(n))
// space complexity
// SC = O(1)