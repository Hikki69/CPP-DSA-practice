#include<bits/stdc++.h>

using namespace std;
vector<int> Union(vector<int>&a,vector<int>&b){
    int n1 = a.size();
    int n2 = b.size();
    set<int>st;
    for(int i=0;i,n1;i++){
        st.insert(a[i]);
    }
    for(int i=0;i<n2;i++){
        st.insert(b[i]);
    }
    vector<int> temp;
    for(auto it:st){
        temp.push_back(it);
    }
    return temp;
}
int main(){
    
    int n,m;
    cin >> n >> m;
    vector<int>arr1(n);
    vector<int>arr2(m);
    for(int i=0;i<n;i++){
        cin >> arr1[i];
    }
    for(int i=0;i<m;i++){
        cin >> arr2[i];
    }
    vector<int> result = Union(arr1,arr2);
    for(int i:result){
        cout << i << " ";
    }
    return 0;
}

// time complexity
// TC = O(n1logn + n2logn) + O(n1+n2)
// space complexity
// SC = O(n1+n2)+O(n1+n2)