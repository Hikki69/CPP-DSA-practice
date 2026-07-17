#include<bits/stdc++.h>

using namespace std;
// for Array containing repeated elements
int SearchInRotatedArr(vector<int>&a,int n,int target){
    int low = 0,high=n-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(a[mid]==target) return mid;
        if(a[low]==a[mid] && a[mid]==a[high]){
            low++,high--;
            continue;
        }
        // left sorted
        if(a[low]<=a[mid]){
            if(a[low]<=target && target<a[mid]){
                high = mid-1;
           }
           else{
            low = mid+1;
           }
        }
        // right sorted
        else{
            if(a[mid]<target && target <= a[high]){
                low = mid+1;
            }
            else{
                high = mid -1;
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
    cout << SearchInRotatedArr(a,n,target);
    return 0;
}

// time complexity
// TC = O(log2(n)) for average case
// TC ~ O(n/2)

// space complexity
// SC = O(1)