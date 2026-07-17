#include<bits/stdc++.h>

using namespace std;
vector<int> sortArray(vector<int>&a,int n){
    // [0--low-1] --> 0   extreme left
    // [low--mid-1] --> 1    mid
    // [mid--high] --> random numbers in unsorted way
    // [high+1--n-1] --> 2   extreme right

    int low =0, mid =0, high = n-1;
    while(mid<=high){
        if(a[mid]==0){
            swap(a[mid],a[low]);
            low++;
            mid++;
        }
        else if(a[mid]==1){
            mid++;
        }
        else{
            swap(a[mid],a[high]);
            high--;
        }
    }
    return a;
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    vector<int>result = sortArray(a,n);
    for(int x:result){
        cout << x << " ";
    }
    return 0;
}

// time complexity 
// TC = O(n)

// space complexity 
// SC = O(1)