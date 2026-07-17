#include<bits/stdc++.h>

using namespace std;
int bs(vector<int>&a,int n,int t){
    int low = 1,high = *max_element(a.begin(),a.end());
    if(n>t) return -1;
    while(low<=high){
        int mid = low+(high-low)/2;
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += ceil((double)a[i]/(double)mid);
        }
        if(sum <= t){
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
    for(int i= 0;i<n;i++){
        cin >> a[i];
    }
    int threshold;
    cin >> threshold;
    cout << bs(a,n,threshold);
    return 0;
}

// time complexity
// TC = O(n*log2(max_element))

// space complexity
// Sc = O(1)