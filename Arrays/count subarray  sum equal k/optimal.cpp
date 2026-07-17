#include<bits/stdc++.h>

using namespace std;
int countSubarrSumEqualsK(vector<int>&a,int n,int k){
    map<long long,int>preSumMap;
    long long sum =0;
    int cnt = 0;
    for(int i=0;i<n;i++){
        sum += a[i];
        if(sum == k){
            cnt++;
        }
        long long rem = sum-k;
        if (preSumMap.find(rem)!=preSumMap.end()){
            int len = i-preSumMap[rem];
            cnt++;
        }
        if(preSumMap.find(sum)==preSumMap.end()){
        preSumMap[sum] = i;
        }
    }
    return cnt;
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
    cout << countSubarrSumEqualsK(a,n,k);
    return 0;
}