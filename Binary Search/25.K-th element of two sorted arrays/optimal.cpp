#include<bits/stdc++.h>

using namespace std;
int KthElem(vector<int>&a,vector<int>&b,int n1,int n2,int k){
    if(n1>n2) return KthElem(b,a,n2,n1,k);
    int p = n1+n2;
    int left = k;
    int low = max(0,k-n2), high  = min(k,n1);
    while(low<= high){
        int mid1 = (low+high)/2;
        int mid2 = left-mid1;
        int l1 = INT_MIN, l2 = INT_MIN;
        int r1 = INT_MAX, r2 = INT_MAX;
        if(mid1<n1) r1 = a[mid1];
        if(mid2<n2) r2 = a[mid2];
        if(mid1-1 >= 0) l1 = a[mid1-1];
        if(mid2-1 >= 0) l2 = a[mid2-1];
        if(l1<=r2 && l2<=r1){
            return max(l1,l2);
        }
        else if(l1>r2) high = mid1-1;
        else low = mid1+1;
    }
    return high;
}
int main(){
    int n1,n2;
    cin >> n1 >> n2;
    vector<int>a(n1);
    for(int i = 0;i <n1;i++){
        cin >> a[n1];
    }
    vector<int>b(n2);
    for(int i = 0;i <n2;i++){
        cin >> b[i];
    }
    int k;
    cin >> k;
    cout << KthElem(a,b,n1,n2,k);
    return 0;
}

// time complexity
// TC = O(log(min(n1,n2)))

// space complexity
// SC = O(1)