#include<bits/stdc++.h>

using namespace std;
string TwoSumProblem(vector<int>&a,int n,int k){
    int left=0;
    int right=n-1;
    sort(a.begin(),a.end());
    while(left<right){
        int sum = a[left]+a[right];
        if(sum == k){
            return "YES";
        }
        else if(sum<k) left++;
        else right--;
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
// TC = O(n)

// space complexity
// SC = O(1)