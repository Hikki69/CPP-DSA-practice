#include<bits/stdc++.h>

using namespace std;
int missingNum(vector<int>&a,int n){
    int xor1 = 0;
    int xor2 = 0;
    for(int i=0;i<n-1;i++){
        xor2 = xor2 ^ a[i];
        xor1 = xor1^(i+1);
    }
    xor1 = xor1^n;
    return xor1^xor2;
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
// TC = O(n)

// space complexity 
// SC = O(1)