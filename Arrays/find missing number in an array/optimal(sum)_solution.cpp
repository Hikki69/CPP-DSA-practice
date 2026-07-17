#include<bits/stdc++.h>

using namespace std;
int missingNUm(vector<int>&a,int n){
    int sum = n*(n+1)/2;
    int s2 = 0;
    for(int i=0;i<n;i++){
        s2 += a[i];
    }
    int num = sum-s2;
    return num;
    
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << missingNUm(a,n);
    return 0;
}

// time complexity 
// TC = O(n);

// space complexity
// SC = O(1)