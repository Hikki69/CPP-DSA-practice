#include<bits/stdc++.h>

using namespace std;
double median(vector<int>&a1,vector<int>&a2,int n,int m){
    vector<int>a3;
    int i = 0, j = 0;
    while(i<n && j<m ){
        if(a1[i]<a2[j]) a3.push_back(a1[i++]);
        else a3.push_back(a2[j++]);
    }
    while(i<n) a3.push_back(a1[i++]);
    while(j<m) a3.push_back(a2[j++]);
    int p  = n+m;
    if(p%2 == 0){
        return a3[p/2];
    }

    return (double)((double)(a3[p/2])+(double)(a3[p/2-1])) / 2.0;
}
int main(){
    int n,m;
    cin >> n >> m;
    vector<int>a1(n);
    for(int i = 0;i<n;i++){
        cin >> a1[i];
    }
    vector<int>a2(m);
    for(int i =0;i<m;i++){
        cin >> a2[i];
    }
    cout << median(a1,a2,n,m);
    return 0;
} 

// time complexity 
// TC = O(n+m)

// space complexity
// SC = O(n+m)