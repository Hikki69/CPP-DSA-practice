#include<bits/stdc++.h>

using namespace std;
vector<vector<int>> fourSum(vector<int>&a,int n,int m){
    set<vector<int>>st;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                for(int l=k+1;l<n;l++){
                    if(a[i]+a[j]+a[k]+a[l]==m){
                        vector<int>temp = {a[i],a[j],a[k],a[l]};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                }
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
// TC = O(n^4)+O(number of quadrapulates)

// space complexity
// SC = 2*O(number of quadruplets)