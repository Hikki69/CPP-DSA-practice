#include<bits/stdc++.h>

using namespace std;
// Ceil = smallest no. in array >=x = lower bound;
int ceil(vector<int>&a,int n,int target){
    int low = 0,high = n-1;
    int ans=-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(a[mid]>=target){
            ans = a[mid];
            high = mid -1;
        }
        else{
            low = mid +1;
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
    int target;
    cin >> target;
    cout << ceil(a,n,target);
    return 0;
}