#include<bits/stdc++.h>

using namespace std;
int lowerBound(vector<int>&a,int n,int target){
    int low = 0, high = n-1;
    int ans = n;
    while(low<=high){
        int mid = (low+high)/2;
        if(a[mid]>=target){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}
int RowWithMaxNumOf1s(vector<vector<int>>&a,int n,int m){
    int cnt_max = 0;
    int index = -1;
    for(int i =0;i<n;i++){
        int cnt_ones = m-lowerBound(a[i],m,1);
        if(cnt_ones > cnt_max){
            cnt_max = cnt_ones;
            index = i;
        }
    }
    return index;
}

int main(){
    int n,m ;
    cin >> n >> m;
    vector<vector<int>>a(n,vector<int>(m));
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin >> a[i][j];
        }
    }
    cout << RowWithMaxNumOf1s(a,n,m);
    return 0;
} 

// time complexity
// TC = O(nxlog2(m))

// space complexity
// SC = O(1)