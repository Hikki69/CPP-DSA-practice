#include<bits/stdc++.h>

using namespace std;
int findPeakElement(vector<int>&a,int n){
    int low = 1,high = n-2;
    if(n==1) return a[0];
    if(a[0]>a[1]) return a[0];
    if(a[n-1]>a[n-2]) return a[n-1];
    while(low<=high){
        int mid = low+(high-low)/2;
        if(a[mid]>a[mid-1]&&a[mid]>a[mid+1]){
            return a[mid];
        }
        else if(a[mid]>a[mid-1]){
            low = mid+1;
        }
        else if (a[mid]>a[mid+1]){
            high = mid-1;
        }
        else{
            low = mid+1;
            // high = mid-1; this can be used coz peak 
            // element is present in both direction
        }
    }
    return -1;
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << findPeakElement(a,n);
    return 0;
}

// time complexity
// TC = O(log2(n))

// space complexity
// SC = O(1)