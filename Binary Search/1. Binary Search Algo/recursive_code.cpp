#include<bits/stdc++.h>

using namespace std;
int recursivefn(vector<int>&a,int low,int high,int target){
    if(low>high) return -1;
    int mid = (low+high)/2;
    // to avoid overflow
    // take
    // int mid = low + (high-low)/2
    if(a[mid]==target) return mid;
    else if(target < a[mid]){
        return recursivefn(a,low,mid-1,target);
    }
    return recursivefn(a,mid+1,high,target);
}
int fn(vector<int>&a,int n,int target){
    return recursivefn(a,0,n-1,target);
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int target;
    cin >> target;
    cout<<fn(a,n,target);
    return 0;
}

// time complexity
// TC = O(log(base2)n)

// space complexity
// SC = O(1)