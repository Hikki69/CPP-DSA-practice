#include<bits/stdc++.h>

using namespace std;
vector<vector<int>> three_sum(vector<int>&a,int n){
    set<vector<int>>st;
    for(int i=0;i<n;i++){
        unordered_set<int>seen;
        for(int j=i+1;j<n;j++){
            int rem=-(a[i]+a[j]);
            if(seen.count(rem)){
                vector<int>temp = {a[i],a[j],rem};
                sort(temp.begin(),temp.end());
                st.insert(temp);
            }
            seen.insert(a[j]);
        }
    }
    vector<vector<int>>ans(st.begin(),st.end());
    return ans;
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    vector<vector<int>>result = three_sum(a,n);
    for(auto &triplet:result){
        for(int x:triplet){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}

// time complexity
// TC = O(n^2logM)

// space complexity
// SC = O(n)+O(number of unique triplets)