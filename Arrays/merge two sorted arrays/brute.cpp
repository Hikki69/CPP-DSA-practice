#include<bits/stdc++.h>

using namespace std;
void mergeTwoSortedArr(vector<int>&a1,vector<int>&a2,int n,int m){
    vector<int>a3(n+m);
    int left = 0;
    int right = 0;
    int index  =0;
    while(left < n && right < m){
        if(a1[left]<=a2[right]){
            a3[index++]=a1[left++];
        }
        else{
            a3[index++]=a2[right++];
        }
    }
    while(left<n){
        a3[index++] = a1[left++];
    }
    while(right<m){
        a3[index++] = a2[right++];
    }
    for(int i=0;i<n+m;i++){
        if(i<n) a1[i]=a3[i];
        else a2[i-n]=a3[i];
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
// TC = O(n+m)+O(n+m)

// space complexity
// SC = O(n+m)