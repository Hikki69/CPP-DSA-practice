#include<bits/stdc++.h>

using namespace std;
int countSubarrWithXOR(vector<int>&a,int n,int m){
    int cnt = 0;
    for(int i=0;i<n;i++){
        int xor1 = 0;
        for(int j=i;j<n;j++){
            xor1 = xor1^a[j];
            if(xor1==m) cnt++;

        }
    }
    return cnt;
}
int main(){
    int n,k;
    cin >> n >> k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << countSubarrWithXOR(a,n,k);
    return 0;
}

// time complexity
// TC = O(N^2)

// space complexity
// SC = O(1)