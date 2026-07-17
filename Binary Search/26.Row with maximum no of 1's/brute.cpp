#include<bits/stdc++.h>

using namespace std;
int main(){
    int n ;
    cin >> n;
    vector<vector<int>>a(n,vector<int>(n));
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin >> a[i][j];
        }
    }
    int ind = -1, max_cnt = -1;
    for(int i =0 ;i <n;i++){
        int cntRow = 0;
        for(int j = 0;j<n;j++){
            cntRow += a[i][j];
        }
        if(cntRow>max_cnt){
            max_cnt = cntRow;
            ind = i;
        }
    }
    cout << ind;
    return 0;
}

// time complexity
// TC = O(nxn)

// space complexity
// SC = O(1)