#include<bits/stdc++.h>

using namespace std;
void rotateMatrix90deg(vector<vector<int>>&a,int n){
    // tranaspose the matrix
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            swap(a[i][j],a[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        // reverse every row
        reverse(a[i].begin(),a[i].end());
    }
}
int main(){
    int n;
    cin >> n;
    vector<vector<int>>a(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    rotateMatrix90deg(a,n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

// time complexity
// TC = o(n/2 x n/2)+O(n/2 x n)

// space complexity
// SC = O(1)