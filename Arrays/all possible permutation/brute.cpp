#include<bits/stdc++.h>

using namespace std;
vector<vector<int>> allPermutation(vector<int>&a,int n){
    set<vector<int>>st;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k =0;k<n;k++){
                if(i==j||j==k||i==k) continue;
                vector<int>temp = {a[i],a[j],a[k]};
                st.insert(temp);
            }
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
    vector<vector<int>>result = allPermutation(a,n);
    for(auto &triplet:result){
        for(int x:triplet){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}