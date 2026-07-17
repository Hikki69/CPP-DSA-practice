#include<bits/stdc++.h>

using namespace std;
vector<vector<int>> mergeOverlappingSubintervals(vector<vector<int>>&a,int n){
    vector<vector<int>>ans;
    for(int i=0;i<n;i++){
       if(ans.empty()|| a[i][0] > ans.back()[1]){
        ans.push_back(a[i]);
       }
       else{
        ans.back()[1]=max(ans.back()[1],a[i][1]);
       }
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    vector<vector<int>>a(n,vector<int>(2));
    for(int i=0;i<n;i++){
        cin >> a[i][0] >> a[i][1];
    }
    vector<vector<int>>result=mergeOverlappingSubintervals(a,n);
    for(int i=0;i<result.size();i++){
        cout << result[i][0] << " " << result[i][1] << endl;
    }
    return 0;
}

// time complexity
// TC = O(nlogn)+O(n)

// space complexity
// SC = O(m)