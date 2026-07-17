#include<bits/stdc++.h>

using namespace std;
void markRow(vector<vector<int>>&matrix,int i,int m){
    for(int j=0;j<m;j++){
        if(matrix[i][j]!=0){
            matrix[i][j]=-1;
        }
    }
}
void markCol(vector<vector<int>>&matrix,int j,int n){
    for(int i=0;i<n;i++){
        if(matrix[i][j]!=0){
            matrix[i][j]=-1;
        }
    }
}
void setMatrixZeroes(vector<vector<int>>&matrix,int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                markRow(matrix,i,m);
                markCol(matrix,j,n);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==-1){
                matrix[i][j]=0;
            }
        }
    }
}
int main(){
    int n ,m;
    cin >> n >> m;    
    vector<vector<int>>a(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    setMatrixZeroes(a,n,m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << a[i][j]<<" ";
        }
        cout << endl;
    }

    return 0;
}

// time complexity
// TC = O((nxm)+(n+m)+(nxm)) --> nearly O(^3)

// space complexity
// SC = o(1)