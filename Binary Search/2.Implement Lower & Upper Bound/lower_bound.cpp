#include<bits/stdc++.h>

using namespace std;
// Lower Bound : ,Smallest index such that a[index]>=x,
// Ex: a[] = {3,5,8,15,19} x=8
// lower bound = 2
// if x=20 ->> lower bound = 5 (last hypothetical index)
int lowerBound(vector<int>&a,int n,int target){

    // in cpp
    // int ans;
    // ans = lower_bound(a.begin(),a.end(),target)-a.begin();
    // above code is only of cpp

    int low = 0, high = n-1;
    int ans = n;
    while(low<=high){
        int mid = (low+high)/2;
        if(a[mid]>=target){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
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
    cout << lowerBound(a,n,target);
    return 0;
}

// time complexity
// TC = O(log2(n))

// space complexity
// SC = O(1)