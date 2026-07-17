#include<bits/stdc++.h>

using namespace std;
vector<int> leadersInArr(vector<int>&a,int n){
    vector<int>L;
    int maxi = INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(a[i]>maxi){
            maxi = a[i];
            L.push_back(a[i]);
        }
    }
    sort(L.begin(),L.end());
    return L;
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    vector<int>Leaders = leadersInArr(a,n);
    for(int x:Leaders){
        cout << x << " ";
    }
    return 0;
}

// time complexity
// TC = O(n)+O(nlogn)

// space complexity
// SC = O(n)