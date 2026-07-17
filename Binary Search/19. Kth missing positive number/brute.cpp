#include<bits/stdc++.h>

using namespace std;
int KthMissingNum(vector<int>&a,int n,int k){
    for(int i = 0;i<n;i++){
        if(a[i]<=k) k++;
        else break;
    }
    return k;
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int k ;
    cin >> k;
    cout << KthMissingNum(a,n,k);
    return 0;
}

// time complexity
// TC = O(n)
// space complexity
// SC = O(1)