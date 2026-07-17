#include<bits/stdc++.h>

using namespace std;
void mergeTwoSortedArr(vector<int>&a1,vector<int>&a2,int n,int m){
    int left = n-1;
    int right= 0;
    while(left>=0&&right<m){
        if(a1[left]>a2[right]){
            swap(a1[left],a2[right]);
            left--,right++;
        }
        else{
            break;
        }
    }
    sort(a1.begin(),a1.end());
    sort(a2.begin(),a2.end());
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
// Tc = O(min(n,m))+O(nlogn)+O(mlogm)

// space complexity
// SC = O(1)