#include<bits/stdc++.h>

using namespace std;
int MaxElIndex(vector<vector<int>>&a,int n,int m,int col){
    int maxVal = -1;
    int index = -1;
    for(int i = 0;i<n;i++){
        if(a[i][col]>maxVal){
            maxVal = a[i][col];
            index = i;
        }
    }
    return index;
}
vector<int> PeakElement(vector<vector<int>>&a,int n ,int m){
    int low = 0;
    int high = m-1;
    while(low<=high){
        int mid = (low+high)/2;
        int maxRowIndex=MaxElIndex(a,n,m,mid);
        int left = mid-1>=0 ? a[maxRowIndex][mid-1]:-1;
        int right = mid+1<m ? a[maxRowIndex][mid+1] : -1;
        if(a[maxRowIndex][mid]>left && a[maxRowIndex][mid] > right){
            return {maxRowIndex,mid};
        }
        else if(a[maxRowIndex][mid] <left){
            high = mid -1;
        }
        else low = mid +1;
    }
    return {-1,-1};
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
    vector<int>ans = PeakElement(a,n,m);
    for(auto x:ans){
        cout << x << " ";
    }
    return 0;
}

// time complexity
// TC = O(nlogm)

// space complexity
// SC=O(1)