#include<bits/stdc++.h>

using namespace std;
string TwoSumProblem(vector<int>&a,int n,int k){
    int cnt =0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            
            if(a[i]+a[j] == k){
                cnt++;
                return "YES"; 
            }
        }
    }
    return "NO";
}
int main(){
    int n,k;
    cin >> n >> k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << TwoSumProblem(a,n,k);
    return 0;
}

// time complexity 
// TC = O(n^2)

// space complexity 
// SC = O(1)