#include<bits/stdc++.h>

using namespace std;
void setMatrixZeroes(vector<vector<int>>&a,int n,int m){
    // int col[m] ={0}; --> a[0][_ _]
    // int row[n]={0}; --> a[_ _][0]
    int col0 = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==0){
                // mark the i-th row
                a[i][0]=0;
                //mark the j-th column
                if(j!=0)
                a[0][j]=0;
                else
                col0 =0;
            }
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(a[i][j]!=0){
                // check for row and column
                if(a[0][j]==0||a[i][0]==0){
                    a[i][j]=0;
                }
            }
        }
    }
    if(a[0][0]==0){
        for(int j=0;j<m;j++){
            a[0][j]=0;
        }
    }
    if(col0==0){
        for(int i=0;i<n;i++){
            a[i][0]=0;
        }
    }
}
int main(){
    int n,m;
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
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

// time complexity
// TC = O(2xnxm)

// space complexity
// SC = O(1)