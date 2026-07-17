#include<bits/stdc++.h>

using namespace std;
vector<int> rearrangeArr(vector<int>&a,int n){
    vector<int>ans(n,0);
    int posIndex = 0, negIndex = 1;
    for(int i=0;i<n;i++){
        if(a[i]<0){
            ans[negIndex] = a[i];
            negIndex += 2;
        }
        else{
            ans[posIndex] = a[i];
            posIndex += 2;
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
    vector<int>results = rearrangeArr(a,n);
    for(int x:results){
        cout << x << " ";
    }
    return 0;
}


// time complexity
// TC = O(n+n/2)

// space complexity
// SC = O(1)