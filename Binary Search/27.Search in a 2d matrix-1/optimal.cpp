#include<bits/stdc++.h>

using namespace std;

// we fill flatten the 2d matrix into a linear matrix
// now apply the bs on it and find the coordinates of the mid
// formula to find the row and col;
// row = ind/num of col
// col = ind%num of col
// now check with target and remove the half which is not needed

bool searchIn2DMatrix(vector<vector<int>>&a,int n,int m, int target){
    int low = 0, high = (n*m)-1;
    while(low<=high){
        int mid = (low+high)/2;
        int row = mid/m;
        int col = mid%m;
        if(a[row][col]==target) return true;
        else if (a[row][col]<target) low = mid+1;
        else high = mid-1;
    }
    return false;
}
int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>>a(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin >> a[i][j];
        }
    }
    int target;
    cin >> target;
    cout << searchIn2DMatrix(a,n,m,target);
    return 0;
}

// time complexity
// TC = O(log(nxm))

// space complexity
//SC = O(1)