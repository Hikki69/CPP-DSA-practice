#include<bits/stdc++.h>

using namespace std;
void SwapIfGreater(vector<int>&a1,vector<int>&a2,int ind1,int ind2){
    if(a1[ind1]>a2[ind2]){
        swap(a1[ind1],a2[ind2]);
    }
}
void mergeTwoSortedArr(vector<int>&a1,vector<int>&a2,int n, int m){
int len = n+m;
int gap = (len/2)+(len%2);
while(gap>=1){
    int left = 0;
    int right  = left +gap;
    while(right <len){
        // a1 and a2
        if(left<n&&right>=n){
            SwapIfGreater(a1,a2,left,right-n);
        }
        // a2 and a2
        else if (left>=n){
            SwapIfGreater(a1,a2,left-n,right-n);
        }
        // a1 and a1
        else{
            SwapIfGreater(a1,a2,left,right);
        }
        left++,right++;
    }
    if(gap==1) break;
    else gap=(gap/2)+(gap%2);
}
}
int main(){
    int n,m;
    cin >> n >> m;
    vector<int>a1(n);
    vector<int>a2(m);
    for(int i=0;i<n;i++){
        cin >> a1[i];
    }
    for(int i=0;i<m;i++){
        cin >> a2[i];
    }
    mergeTwoSortedArr(a1,a2,n,m);
    for(int i=0;i<n;i++){
        cout << a1[i] << " ";
    }
    cout << endl;
    for(int i=0;i<m;i++){
        cout << a2[i] << " ";
    }
    return 0;
}

// time complexity
// TC = O(log(base2)(n+m))*O(n+m)

// space complexity
// SC = O(1)