#include<bits/stdc++.h>

using namespace std;
vector<int> TwoSumProblem(vector<int>&a,int n,int k){
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        int b = a[i];
        int more = k-b;
        if(mpp.find(more)!=mpp.end()){
            return {mpp[more],i}; 
        }
        mpp[b] =i;
    }
    return {-1,-1};
}
int main(){
    int n,k;
    cin >> n>> k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    vector<int>result = TwoSumProblem(a,n,k);
    for(int x:result){
        cout << x << " ";
    }
    return 0;
}

// time complexity 
// TC = O(nlogn);

// space complexity
// SC = o(n);