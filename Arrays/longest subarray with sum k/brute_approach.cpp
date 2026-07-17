#include<bits/stdc++.h>

using namespace std;
int lsubArr(vector<int>&a,int n,int k){
    int len =0;
    for(int i=0;i<n;i++){
        int sum =0;
        for(int j=i;j<n;j++){
            sum += a[j];
            if(sum == k){
                len = max(len, j-i+1);
            }
        }
    }
    return len;
}
int main(){
    int n,k;
    cin >> n >> k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << lsubArr(a,n,k);
    return 0;
}

// time complexity 
// TC = O(n^2)

// space complexity
// SC = O(1)