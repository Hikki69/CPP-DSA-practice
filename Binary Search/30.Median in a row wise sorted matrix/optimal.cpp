#include<bits/stdc++.h>

using namespace std;
// matrix of order odd
int upperBound(vector<int>&a,int n,int target){
    int low =0,high=n-1;
    int ans = n;
    while(low<=high){
        int mid = (low+high)/2;
        if(a[mid]>target){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid +1;
        }
    }
    return ans;
}
int countSmallEq(vector<vector<int>>&a,int n, int m,int x){
    int cnt = 0;
    for(int i=0;i<n;i++){
        cnt += upperBound(a[i],m,x);
    }
    return cnt;
}
int Median(vector<vector<int>>&a,int n, int m){
    int low = INT_MAX, high = INT_MIN;

    for(int i =0;i<n;i++){
        low = min(low,a[i][0]);
        high = max(high,a[i][m-1]);
    }

    int req = (n*m)/2;
    while(low<=high){
        int mid = (low+high)/2;
        int smallestEqual = countSmallEq(a,n,m,mid);
        if(smallestEqual<=req) low = mid+1;
        else{
            high = mid-1;
        }
    }
    return low;
}
int main(){
    int n,m;
    cin >> n>> m;
    vector<vector<int>>a(n,vector<int>(m));
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin >> a[i][j];
        }
    }
    cout << Median(a,n,m);
    return 0;
}

// time complexity
// TC = O(log(1e9) x n x logm)

// space complexity
// SC = O(1)