#include<bits/stdc++.h>

using namespace std;
int sum1(vector<int>&a,int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += a[i];
    }
    return sum;
}
int fn(vector<int>&wt,int n,int cap){
    int load = 0,days = 1;
    for(int i=0;i<n;i++){
     if(load+wt[i]>cap){
        days = days+1;
        load = wt[i];
     }
     else{
        load += wt[i];
     }
    }
    return days;
}
int capToShip(vector<int>&a,int n,int d){
    int low = *max_element(a.begin(),a.end());
    int high = sum1(a,n);
    while(low<=high){
        int mid = low+(high-low)/2;
        int load = 0,days = 1;
        int daysReq = fn(a,n,mid);
        if(daysReq<=d){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return low; 
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int d;
    cin >> d;
    cout << capToShip(a,n,d);
    return 0;
}

// time complexity 
// TC = O(log2(sum-max) * n)

// space complexity
// SC = O(1)