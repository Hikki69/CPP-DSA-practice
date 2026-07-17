#include<bits/stdc++.h>

using namespace std;
vector<int> firstLastOccurance(vector<int>&a,int n,int target){
    int lb = lower_bound(a.begin(),a.end(),target)-a.begin();
    if(lb==n || a[lb]!=target) return {-1,-1};
    int ub = upper_bound(a.begin(),a.end(),target)-a.begin();
    return {lb,ub-1};
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
    vector<int>result=firstLastOccurance(a,n,target);
    for(int x:result){
        cout << x << " ";
    }
    return 0;
}

// time complexity
// TC = 2*O(log2(n));

// space omplexity
// SC= o(1)