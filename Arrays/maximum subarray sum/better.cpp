#include<bits/stdc++.h>

using namespace std;
int maxSubArr(vector<int>&a,int n){
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        int sum =0;
        for(int j=i;j<n;j++){
            sum += a[j];
            maxi = max(maxi,sum);
        }
    }
    return maxi;
}
int main(){
    int n;
    cin >>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << maxSubArr(a,n);
    return 0;
}

// time complexity 
// TC = O(n^2)

//space complexity
// SC = O(1)