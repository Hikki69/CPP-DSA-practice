#include<bits/stdc++.h>

using namespace std;
vector<int> intersection(vector<int>&a,vector<int>&b){
    int n1 = a.size();
    int n2 = b.size();
    vector<int>ans;
    int vis[n2]= {0};
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(a[i] == b[j] && vis[j] == 0 ){
                ans.push_back(a[i]);
                vis[j] = 1;
                break;
            }
            if(b[j]>a[i]) break;
        }
    }
    return ans;
   
}
int main(){
    int n,m;
    cin >> n>>m;
    vector<int>a(n);
    vector<int>b(m);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<m;i++){
        cin >> b[i];
    }
    vector<int>result = intersection(a,b);
    if(result.size() != 0){
        for(int x:result){
        cout << x << " ";
    }
    }
    else{
        cout << "-1";
    }
    

    return 0;
}

// time complexity 
// TC = O(n1*n2)

// space complexity
// SC = O(n2)