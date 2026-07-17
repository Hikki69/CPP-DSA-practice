#include<bits/stdc++.h>

using namespace std;
int MinElementInRotatedArr(vector<int>&a,int n){
    int low = 0,high = n-1;
    int ans = INT_MAX;
    while(low<=high){
        int mid = low+(high-low)/2;
        ans = min(ans,a[mid]);
        if(a[low]<a[high]){
            ans = min(ans,a[low]);
            break;
        }
        if(a[low]<a[mid]){
            ans = min(ans,a[low]);
            low = mid+1;
        }
        else if(a[mid]<a[high]){
            ans = min(ans,a[mid]);
            high = mid-1;
        }
        else{
            high--;
            low++;
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
    return 0;
}