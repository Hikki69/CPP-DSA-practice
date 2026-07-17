#include<bits/stdc++.h>

using namespace std;
void setMatrixZeroes(vector<vector<int>>&matrix,int n,int m){
 int row[n]={0},col[m]={0};
 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(matrix[i][j]==0){
            row[i]=1;
            col[j]=1;
        }
    }
 }   
 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(row[i]||col[j]){
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
// TC = O((nxm)+O(nxm)) = O(2xnxm)

// space complexity
// SC = O(n+m)