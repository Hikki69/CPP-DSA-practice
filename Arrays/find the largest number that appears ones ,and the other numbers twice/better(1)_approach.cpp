#include<bits/stdc++.h>

using namespace std;
int maxAppearsOnce(vector<int>&a,int n){
    int maxi =a[0];
    for(int i=0;i<n;i++){
        maxi = max(maxi,a[i]);
    }
    int hash[maxi] = {0};
    for(int i=0;i<n;i++){
        hash[a[i]]++;
    }
    int ans = -1;
    for(int i=0;i<n;i++){
        if(hash[a[i]]==1) {
            ans = max(ans,a[i]);
        }
        
    }
    return ans;
}
int main(){
    int n;
    cin >>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << maxAppearsOnce(a,n);
    return 0;
    
}

//time complexity
// TC = O(3n)

// Space complexity
// SC = O(maxi)