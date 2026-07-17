#include<bits/stdc++.h>

using namespace std;
// i<j && a[i]>2*a[j]
// find number of such pairs
int ReversePairs(vector<int>&a,int n){
    int cnt = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>2*a[j]) cnt++;
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
    cout << ReversePairs(a,n);
    return 0;
}

// time complexity;
// TC = O(n^2)

// space complexity
// SC = O(1);