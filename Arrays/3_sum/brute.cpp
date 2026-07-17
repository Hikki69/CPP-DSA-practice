#include<bits/stdc++.h>

using namespace std;
vector<vector<int>> three_sum(vector<int>&a,int n){
    set<vector<int>> st;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(a[i]+a[j]+a[k]==0){
                    vector<int>temp = {a[i],a[j],a[k]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
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
// TC = O(log(number of unique triplets))+O(n^3)

// space complexity
// SC = 2*O(number of unique triplets)