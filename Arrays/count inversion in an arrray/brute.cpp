#include<bits/stdc++.h>

using namespace std;
// count inversions
// i<j & a[i]>a[j]
// find no. of such pairs
int CountInversions(vector<int>&a,int n){
        int cnt = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]) cnt++;
            else continue;
        }        
    }
    return cnt;

}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << CountInversions(a,n);
    return 0;
}

// time complexity
// TC = O(n^2)

// space complexity
// SC = O(1)