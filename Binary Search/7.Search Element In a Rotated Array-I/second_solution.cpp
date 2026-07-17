#include<bits/stdc++.h>

using namespace std;
int searchElementInRotatedArr(vector<int>&a,int n,int target){
    int low=0,high = n-1;
    int ans=-1;

    // identify the sorted half

    while(low<=high){
        int mid = low+(high-low)/2;
        if(a[mid]==target){
            return mid;
        }
        // left sorted
        if(a[low]<=a[mid]){
            if(a[low]<=target && target <= a[mid]){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        // right sorted
        else{
            if(a[mid]<=target && target <= a[high]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
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
    int target;
    cin >> target;
    cout << searchElementInRotatedArr(a,n,target);
    return 0;
}

// time complexity
// TC = O(log2(n))

// space complexity
// SC = O(1)