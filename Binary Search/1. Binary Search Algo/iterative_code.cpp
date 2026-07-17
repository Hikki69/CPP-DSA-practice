#include<bits/stdc++.h>

using namespace std;
int fn(vector<int>&a,int n,int target){
    int low = 0;
    int high = n-1;
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
    cout << fn(a,n,target);
    return 0;
}