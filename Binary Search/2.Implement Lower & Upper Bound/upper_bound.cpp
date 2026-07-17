#include<bits/stdc++.h>

using namespace std;
// Upper Bound : ,Smallest index such that a[index]>=x,
// Ex: a[] = {3,5,8,15,19} x=8
// upper bound = 3
// if x=20 ->> upper bound = 5 (last hypothetical index)
int upperBound(vector<int>&a,int n,int target){
    // in cpp 
    // int ans;
    // ans = upper_bound(a.begin(),a.end(),target)-a.begin();
    // above code is only for cpp

    int low =0,high=n-1;
    int ans = n;
    while(low<=high){
        int mid = (low+high)/2;
        if(a[mid]>target){
            ans = mid;
            high = mid-1;
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
    cout << upperBound(a,n,target);
    return 0;
}

// time complexity
// TC = O(log2(n))

// space complexity
// SC = O(1)