#include<bits/stdc++.h>

using namespace std;
vector<int> generateRow(int row){
    long long ans =1;
    vector<int>ansRow;
    ansRow.push_back(1);
    for(int col=1;col<row;col++){
        ans = ans*(row-col);
        ans = ans/col;
        ansRow.push_back(ans);
    }
    return ansRow;
}
vector<vector<int>> printPascalTriangle(int n){
    vector<vector<int>>ans;
    for(int i=1;i<=n;i++){
        ans.push_back(generateRow(i));
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    vector<vector<int>>ans = printPascalTriangle(n);
    for(auto &row:ans){
        for(auto &val:row){
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}

// time complexity
// TC = O(n^2)