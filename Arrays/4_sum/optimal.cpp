#include<bits/stdc++.h>

using namespace std;
vector<vector<int>> fourSum(vector<int>&a,int n,int m){
   sort(a.begin(),a.end());
   vector<vector<int>>ans;
   for(int i=0;i<n;i++){
    if(a[i]==a[i-1] && i>0) continue;
    for(int j=i+1;j<n;j++){
        if(a[j]==a[j-1]&&j!=i+1) continue;
        int k=j+1;
        int l=n-1;
        while(k<l){
            long long sum = a[i]+a[j]+a[k]+a[l];
            if(sum==m){
                vector<int>temp = {a[i],a[j],a[k],a[l]};
                ans.push_back(temp);
                k++;
                l--;
                while(a[k]==a[k-1]&&k<l) k++;
                while(a[l]==a[l+1]&&k<l) l--;
            }
            else if(sum<m) k++;
            else l--;
        }
    }
   }
   return ans;
}
int main(){
    int n,m;
    cin >> n >> m;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    vector<vector<int>>result=fourSum(a,n,m);
    for(auto &quad:result){
        for(int x:quad){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}

// time complexity
// TC = O(n^2*n)=O(n^3)

// space complexity
// SC = O(number of quads)