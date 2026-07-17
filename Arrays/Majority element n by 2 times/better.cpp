#include<bits/stdc++.h>

using namespace std;
int majorElement(vector<int>&a,int n){
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[a[i]]++;
    }
    for(auto it:mpp){
        if(it.second > n/2) return it.first;
    }
    return -1;
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << majorElement(a,n);
    return 0;
}

// time complexity 
// TC = O(nlogn) + O(n)

// space complexity
// SC = O(n) only if array contains unique elements 