#include<bits/stdc++.h>

using namespace std;
// brute approach is using merge sort
// TC = O(nlogn) , SC = O(n)

// better approach
vector<int> sortArray(vector<int>&a,int n){
    int cnt0 =0;
    int cnt1 = 0;
    int cnt2 = 0;
    for(int i=0;i<n;i++){
        if(a[i] == 0) cnt0++;
        else if(a[i] == 1) cnt1++;
        else cnt2++;
    }
    for(int i=0;i<cnt0;i++){
        a[i] =0;
    }
    for(int i=cnt0;i<cnt0+cnt1;i++){
        a[i] = 1;
    }
    for(int i=cnt0+cnt1;i<n;i++){
        a[i] = 2;
    }
    return a;
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    vector<int>result = sortArray(a,n);
    for(int x:result){
        cout << x << " ";
    }
    return 0;
}

// time complexity
// TC = O(2n)

// space complexity
// SC = o(1)