#include<bits/stdc++.h>

using namespace std;
int sum(vector<int>&a,int n){
    int s=0;
    for(int i=0;i<n;i++){
        s+=a[i];
    }
    return s;
}
int fn(vector<int>&a,int n,int pages,int m){
    int students =1,pagestudents = 0;
    for(int i = 0;i<n;i++){
        if(pagestudents+a[i]<=pages){
            pagestudents+=a[i];
        }
        else{
            students++;
            pagestudents=a[i];
        }
    }
    return students;
}
int minNumPages(vector<int>&a,int n,int m){
    int low = *max_element(a.begin(),a.end());
    int high = sum(a,n);
    while(low<=high){
        int mid = low+(high-low)/2;
        if(fn(a,n,mid,m)<=m){
            high= mid-1;
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
    int m;
    cin >> m;
    cout << minNumPages(a,n,m);
    return 0;
}

// time complexity
// TC = O(sum-max+1)*O(log2(n))

// sppace complexity
// SC = O(1)