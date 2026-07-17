#include<bits/stdc++.h>

using namespace std;
// every element appears twice except one
// find that unique element

// (even,odd) ->> element is on right half
// (odd,even) ->> element is on left half

int SingleElementInSortedArr(vector<int>&a,int n){
    int low = 1,high =n-2;
    if(n==1) return a[0];
    if(a[0]!=a[1]) return a[0];
    if(a[n-1]!=a[n-2]) return a[n-1];
    while(low<=high){
        int mid = low+(high-low)/2;
        if(a[mid]!=a[mid-1]&&a[mid]!=a[mid+1]) return a[mid];
        //element on the right half means mid in the left half
        if((mid%2==1 && a[mid-1]==a[mid])||(mid%2==0 && a[mid]==a[mid+1])){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
}
int main(){
    int n;
    cin  >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << SingleElementInSortedArr(a,n);
    return 0;
}

// time complexity
// TC =O(log2(n))

// space complexity
// SC = O(1)