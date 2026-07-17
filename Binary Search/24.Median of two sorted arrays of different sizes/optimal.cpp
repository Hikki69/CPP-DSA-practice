#include<bits/stdc++.h>

using namespace std;
double median(vector<int>&a,vector<int>&b,int n,int m){
    if(n>m) return median(b,a,m,n);
    int p = n+m;
    int left = (p+1)/2;
    int low = 0, high  = n;
    while(low<= high){
        int mid1 = (low+high)/2;
        int mid2 = left-mid1;
        int l1 = INT_MIN, l2 = INT_MIN;
        int r1 = INT_MAX, r2 = INT_MAX;
        if(mid1<n) r1 = a[mid1];
        if(mid2<m) r2 = a[mid2];
        if(mid1-1 >= 0) l1 = a[mid1-1];
        if(mid2-1 >= 0) l2 = a[mid2-1];
        if(l1<=r2 && l2<=r1){
            if(p%2==0) return max(l1,l2);
            return (double)(max(l1,l2)+max(r1,r2))/2.0;
        }
        else if(l1>r2) high = mid1-1;
        else low = mid1+1;
    }
    return high;
}
int main(){
    int n,m;
    cin >> n >> m;
    vector<int>a(n);
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }
    vector<int>b(m);
    for(int i = 0;i<m;i++){
        cin >> b[i];
    }
    cout << median(a,b,n,m);
    return 0;
}

// time complexity
// TC = O(log(min(n,m)))

// space complexity
// SC = O(1)