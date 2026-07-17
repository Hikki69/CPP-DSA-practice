#include<bits/stdc++.h>

using namespace std;
void rotateMatrix90deg(vector<vector<int>>&a,int n){
    vector<vector<int>>ans(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans[j][n-1-i]=a[i][j];
        }
    }
    a=ans;
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

//time complexity
// TC = o(n^2)

// space complexity
// SC = o(n^2)