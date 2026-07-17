#include<bits/stdc++.h>

using namespace std;
vector<int> majorityElementNby3Times(vector<int>&a,int n){
    vector<int>ans;
    map<int,int>mpp;
    int mm = (n/3)+1;
    for(int i=0;i<n;i++){
        mpp[a[i]]++;
        if(mpp[a[i]]==mm){
            ans.push_back(a[i]);
        }
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    vector<int>result=majorityElementNby3Times(a,n);
    for(int x:result){
        cout<<x<<" ";
    }

    return 0;
}

// time complexity
// TC = O(logn)+O(n)

// time complexity
// TC = O(n)