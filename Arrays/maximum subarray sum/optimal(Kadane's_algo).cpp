#include<bits/stdc++.h>

using namespace std;
long long maxSubArr(vector<int>&a,int n){
    long long sum =0, maxi = LONG_MIN;
    // vector<int>ans;
    // int start=-1,end=-1;
    for(int i=0;i<n;i++){
        sum += a[i];
        if(sum==0){
            // start =i;
        }
        if(sum <0){
            sum =0;
        }
        if(sum >maxi){
            maxi = sum;
            // int ansStart = start,ansEnd = i;
        }
    }
    if(maxi < 0){
        return 0;
    }
    return maxi;
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << maxSubArr(a,n);
    return 0;
}

// time complexity 
// TC = O(n)

// space complexity
// SC = O(1)