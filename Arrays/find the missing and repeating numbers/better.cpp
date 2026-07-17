#include<bits/stdc++.h>

using namespace std;
vector<int> findMissingAndRepeatingNum(vector<int>&a,int n){
    vector<int>hasharr(n+1,0);
    vector<int>ans;
    for(int i=0;i<n;i++){
        hasharr[a[i]]++;
    }
    int repeating = -1,missing = -1;
    for(int i=0;i<n;i++){
        if(hasharr[i]==2) repeating = i;
        else if (hasharr[i]==0) missing =i;

        if(repeating!=0&&missing!=0) break;
    }
    ans.push_back(repeating);
    ans.push_back(missing);
    return ans;
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    vector<int>result=findMissingAndRepeatingNum(a,n);
    for(int x:result){
        cout << x << " ";
    }
    return 0;
}

// time complexity
// TC = O(2n)

// space complexity
// SC = O(n)