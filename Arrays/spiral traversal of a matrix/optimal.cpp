#include<bits/stdc++.h>

using namespace std;
vector<int> spiralTraversal(vector<vector<int>>&a){
    if(a.empty()) return {};
    int n = a.size();
    int m = a[0].size();
    int left = 0,right = m-1;
    int top = 0, bottom = n-1;
    vector<int>ans;

    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
        ans.push_back(a[top][i]);
    }
    top++;
        for(int i=top;i<=bottom;i++){
        ans.push_back(a[i][right]);
    }
    right--;
    if(top<=bottom){
        for(int i=right;i>=left;i--){
        ans.push_back(a[bottom][i]);
    }
    bottom--;
    }
    if(left<=right){
        for(int i=bottom;i>=top;i--){
        ans.push_back(a[i][left]);
        }
        left++;
    }
    }
    return ans;
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
    vector<int>result = spiralTraversal(a);
    for(int x:result){
        cout << x << endl;
    }
    
    return 0;
}

// time complexity
// TC = O(nxm)

// space complexity
// SC = O(nxm)