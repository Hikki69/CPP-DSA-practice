#include<bits/stdc++.h>

using namespace std;
int TimesArrRotated(vector<int>&a,int n){
    int low = 0,high = n-1;
    int ans = INT_MAX;
    int index = -1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(a[low]<=a[high]){
            if(a[low]<ans){
                index  = low;
                ans = a[low];
            }
            break;
        }
        //left sorted 
        if(a[low]<=a[mid]){
            if(a[low]<ans){
                index = low;
                ans = a[low];
            }
            low = mid+1;
        }
        else{
            high = mid-1;
            if(a[low]<ans){
                index = mid;
                ans = a[mid];
            }
        }
    }
    return index;
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << TimesArrRotated(a,n);
    return 0;
}

// time complexity
// TC = O(log2(n))

// space complexity
// SC = O(1)