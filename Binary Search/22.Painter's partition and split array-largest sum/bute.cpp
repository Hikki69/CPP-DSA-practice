#include<bits/stdc++.h>

using namespace std;
int sum(vector<int>&arr){
    int n = arr.size();
    int s=0;
    for(int i=0;i<n;i++){
        s+=arr[i];
    }
    return s;
}
int fn(vector<int>&a,int n,int area){
    int painter = 1,areaPainter = 0;
    for(int i=0;i<n;i++){
        if(areaPainter+a[i]<=area){
            areaPainter+=a[i];
        }
        else{
            painter++;
            areaPainter = a[i];
        }
    }
    return painter;
}
int minTime(vector<int>&a,int n,int k){
    int low = *max_element(a.begin(),a.end());
    int high = sum(a);
    while(low<=high){
        int mid = low+(high-low)/2;
        if(fn(a,n,mid)>k){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return low;
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i =0;i<n;i++){
        cin >> a[i];
    }
    int k;
    cin >> k;
    cout << minTime(a,n,k);
    return 0;
}

// time complexity
// TC = O(sum-max+1)*O(log2(n))

// space complexity
// SC = O(1)