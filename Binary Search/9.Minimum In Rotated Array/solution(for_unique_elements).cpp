#include<bits/stdc++.h>

using namespace std;
// for array containing Unique elements

int MinInRotatedArr(vector<int>&a,int n){
    int low = 0,high=n-1;
    int ans=INT_MAX;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(a[low]<=a[high]){
            ans = min(ans,a[low]);
            break;
        }
        // left sorted
        if(a[low]<=a[mid]){
            ans = min(ans,a[low]);
            low = mid+1;
        }
        // right sorted
        else{
            ans = min(ans,a[mid]);
            high=mid-1;
        }
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    cout << MinInRotatedArr(a,n);
    return 0;
}

// time complexity
// TC = O(log2(n))

// space complexity
// SC = O(1)