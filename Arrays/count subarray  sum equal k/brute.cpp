#include<bits/stdc++.h>

using namespace std;
int countSubarrOfSumEqualsK(vector<int>&a,int n,int k){
    int cnt =0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum =0;
            for(int k=i;k<= j;k++){
                sum = sum +a[k];
            }
            if(sum==k){
            cnt++;
            }
        }
    }
    return cnt;
}
int main(){
    int n;
    cin >>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int k;
    cin >> k;
    cout << countSubarrOfSumEqualsK(a,n,k); 
    return 0;
}

// time complexity
// TC = O(n^3)

// space complexity
// SC = O(1)