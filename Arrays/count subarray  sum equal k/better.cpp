#include<bits/stdc++.h>

using namespace std;
int countSubarrSumEqualsK(vector<int>&a,int n,int k){
    int cnt =0;
    for(int i=0;i<n;i++){
            int sum =0;
        for(int j=i;j<n;j++){
            sum += a[j];
            if(sum==k){
               cnt++;
            }
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

// time complexity
// TC = O(n^2)

// space complexity
// SC = O(1)