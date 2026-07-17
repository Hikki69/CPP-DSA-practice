#include<bits/stdc++.h>

using namespace std;
int searchInsertPosition(vector<int>&a,int n,int target){
    // find insert position is just find lower bound
    int low=0,high=n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(a[mid]>target){
            high = mid-1;
        }
        else if (a[mid]<target){
            low = mid+1;
        }
        else{
            return mid;
        }
    }
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
    cout << searchInsertPosition(a,n,target);
    return 0;
}

// time complexity
// TC = O(log2(n))

// space complexity
// SC = O(1)