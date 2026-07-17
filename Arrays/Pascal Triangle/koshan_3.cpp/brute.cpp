#include<bits/stdc++.h>

using namespace std;
long long ncr(int n,int r){
    long long res =1;
    if(r<0||r>n) return 0;
    if(r==0||r==n) return 1;
    for(int i=0;i<r;i++){
        res = res*(n-i);
        res = res/(i+1);
    }
    return res;
}
vector<vector<int>> printPascalTriangle(int n){
    vector<vector<int>>ans;
    for(int row=1;row<=n;row++){
        vector<int>temp;
        for(int col=1;col<=row;col++){
            temp.push_back(ncr(row-1,col-1));
        }
        ans.push_back(temp);
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    vector<vector<int>>PascalTriangle = printPascalTriangle(n);
    for(auto &row:PascalTriangle){
        for(auto &val:row){
            cout << val << " ";
        }
        cout << endl;
    }
    
    return 0;
}

// time complexity 
// TC = O(n*n*r) = O(n^3) nearly
