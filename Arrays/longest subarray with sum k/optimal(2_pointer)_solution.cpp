#include<bits/stdc++.h>

using namespace std;
int lsubArr(vector<int>&a,int n,long long k){
    int left=0;
    int right=0;
    long long sum =a[0] ;
    int maxLen = 0;
    while(right<n){
        while(left<=right && sum > k){
            sum -= a[left];
            left++;
        }
        if(sum == k){
            maxLen = max(maxLen,right-left+1);
        }
        right++;
        if(right<n){
            sum += a[right];
        }
    }
    return maxLen;
}
int main(){
    int n,k;
    cin >> n >> k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << lsubArr(a,n,k);

    return 0;
}

// time complexity 
// TC = O(2n)

// space complexity 
// SC = O(1)