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
    for(int i =*max_element(a.begin(),a.end());i<= sum1(a,n);i++){
        int daysReq = fn(a,n,i);
        if(daysReq<=d) return i;
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
    int d;
    cin >> d;
    cout << capToShip(a,n,d);
    return 0;
}

// time complexity
// TC = O(sum-max * N);

// space complexity
//SC = O(1)