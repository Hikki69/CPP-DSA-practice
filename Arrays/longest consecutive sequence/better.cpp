#include<bits/stdc++.h>

using namespace std;
int longestConsecutiveSeq(vector<int>&a,int n){
    sort(a.begin(),a.end());
    int cntCurr=0,lastSmaller = INT_MIN,longest = 1;
    for(int i=0;i<n;i++){
        if(a[i]-1==lastSmaller){
            cntCurr += 1;
            lastSmaller = a[i];
            longest = max(longest,cntCurr);
        }
        else if(a[i] != lastSmaller){
            cntCurr=1;
            lastSmaller=a[i];
        }
        longest = max(longest,cntCurr);
    }
    return longest;
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << longestConsecutiveSeq(a,n);
    return 0;
}

// time complexity
// TC = O(nlogn)+O(n)

// space complexity
// SC = O(1)