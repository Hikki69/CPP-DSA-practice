#include<bits/stdc++.h>

using namespace std;
vector<int> majorityElementNby3Times(vector<int>&a,int n){
    vector<int>ls;
    for(int i =0;i<n;i++){
        if(ls.size()==0 || ls[0]!=a[i]){
            int cnt =0;
            for(int j=0;j<n;j++){
            if(a[j]==a[i]) cnt++;
            }
            if(cnt>n/3) ls.push_back(a[i]);
        }
        if(ls.size()==2) break;
    }
    return ls;
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i =0;i<n;i++){
        cin >> a[i];
    }
    vector<int>result = majorityElementNby3Times(a,n);
    for(int x:result){
        cout << x << " ";
    }
    return 0;
}

// time complexity
// TC = O(n^2)

// space complexity
// SC = O(1)