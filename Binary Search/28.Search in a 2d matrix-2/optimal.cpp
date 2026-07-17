#include<bits/stdc++.h>

using namespace std;
vector<int> searchIn2DMatrix(vector<vector<int>>&a,int n,int m,int target){
    int row = 0;
    int col = m-1;
    while(row<n && col >= 0){
        if(a[row][col]==target){
            return {row,col};
        }
        else if(a[row][col]<target){
            row++;
        }
        else col--;
    }
    return {-1,-1};
}
int main(){
    int n,m ;
    cin >> n >> m;
    vector<vector<int>>a(n,vector<int>(m));
    for(int i = 0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    int target;
    cin >> target;
    vector<int>ans = searchIn2DMatrix(a,n,m,target);
    for(auto x:ans){
        cout << x << " ";
    }
    return 0;
}

// time complexity
// TC = O(n+m)

// space complexity
// SC = O(1)