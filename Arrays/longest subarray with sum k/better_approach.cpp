#include<bits/stdc++.h>

using namespace std;
int lsubArr(vector<int>&a,int n,long long k){
    map<long long,int>preSumMap;
    long long sum =0;
    int maxLen = 0;
    for(int i=0;i<n;i++){
        sum += a[i];
        if(sum == k){
            maxLen = max(maxLen,i+1);
        }
        long long rem = sum-k;
        if (preSumMap.find(rem)!=preSumMap.end()){
            int len = i-preSumMap[rem];
            maxLen = max(maxLen,len);
        }
        if(preSumMap.find(sum)==preSumMap.end()){
        preSumMap[sum] = i;
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
// TC = O(nlongn)

// space complexity 
// SC = O(n)