#include<bits/stdc++.h>
// reagrrange by sign means
// {3, 1, -2, -5, 2, -4} --> {3, -2, 1, -5, 2, -4}
// order of positve and negative elements is same 
using namespace std;
vector<int> rearrangeArr(vector<int>&a,int n){
    vector<int>pos;
    vector<int>neg;
    for(int i=0;i<n;i++){
        if(a[i]<0){
            neg.push_back(a[i]);
        }
        if(a[i]>0){
            pos.push_back(a[i]);
        }
    }    
    for(int i=0;i<n/2;i++){
        a[2*i] = pos[i];
        a[2*i+1] = neg[i];
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
    vector<int>results = rearrangeArr(a,n);
    for(int x:results){
        cout << x << " ";
    }
    return 0;
}

// time complexity
// TC = O(2n)

// space complexity
// SC = O(n)

