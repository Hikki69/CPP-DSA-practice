#include<bits/stdc++.h>

using namespace std;
int missingNum(vector<int>&a,int n){
    vector<int>hash(n+1,0);
    
    for(int i=0;i<n;i++){
        hash[a[i]] = 1;
    }
    for(int i=1;i<=n;i++){
        if(hash[i] == 0){
            return i;
        }
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
    cout << missingNum(a,n);

    return 0;
}

// time complexity
// TC = O(n)+O(n)

// space complexity
// SC = O(n)