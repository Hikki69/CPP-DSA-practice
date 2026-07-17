#include<bits/stdc++.h>

using namespace std;
// Floor = largest no. in array <=x;
int floor(vector<int>&a,int n,int target){
    int low =0, high = n-1;
    int ans = -1;
    while(low <= high){
        int mid = (low+high)/2;
        if(a[mid]<=target){
            ans = a[mid];
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return ans;
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
    cout << floor(a,n,target);
    return 0;
}

// time complexity
// TC = O(log2(n))

// space complexity
// SC = O(1)