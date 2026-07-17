#include<bits/stdc++.h>

using namespace std;
int maxAppearsOnce(vector<int>&a,int n){
    map<long long,int>mpp;
    for(int i=0;i<n;i++){
        mpp[a[i]]++;
    }
    int ans = -1;
    for(auto it:mpp){
        if(it.second == 1){
            ans = it.first;
        }
        
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << maxAppearsOnce(a,n);

    return 0;
}

// time complexity
// TC = O(nlogM)+O(n/2+1)   where M = n/2+1

// space complexity 
// SC = O(n/2+1)