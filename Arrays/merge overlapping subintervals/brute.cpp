#include<bits/stdc++.h>

using namespace std;
vector<vector<int>> mergeOverlappingSubintervals(vector<vector<int>>&a,int n){
    sort(a.begin(),a.end());
    vector<vector<int>>ans;
    for(int i=0;i<n;i++){
        int start = a[i][0];
        int end = a[i][1];
        if(!ans.empty()&& end<=ans.back()[1]){
            continue;
        }
        for(int j=i+1;j<n;j++){
            if(a[j][0]<=end){
                end = max(end,a[j][1]);
            }
            else{
                break;
            }
        }
        ans.push_back({start,end});
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    vector<vector<int>>intervals(n,vector<int>(2));
    for(int i =0;i<n;i++){
        cin >> intervals[i][0] >> intervals[i][1]; 
    }
    vector<vector<int>>result = mergeOverlappingSubintervals(intervals,n);
    for(int i=0;i<result.size();i++){
       cout << result[i][0] << " " << result[i][1] << endl;
    }
    return 0;
}

// time complexity
// TC = O(nlogn)+O(2n)

// space complexity
// SC = o(M)