#include<bits/stdc++.h>

using namespace std;
vector<vector<int>> fourSum(vector<int>&a,int n,int m){
    set<vector<int>>st;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            unordered_set<int>seen;
            for(int k=j+1;k<n;k++){
                int rem = m-(a[i]+a[j]+a[k]);
                if(seen.count(rem)){
                    vector<int>temp = {a[i],a[j],a[k],rem};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
                seen.insert(a[k]);
            }
        }
    }
    vector<vector<int>>ans(st.begin(),st.end());
    return ans;
}
int main(){
    int n,m;
    cin >> n >> m;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    vector<vector<int>>result = fourSum(a,n,m);
    for(auto &quad:result){
        for(int x:quad){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}

// time complexity
// TC = O(n^3logp)

// space complexity
// SC = O(n)+2*O(number of quadruplets)