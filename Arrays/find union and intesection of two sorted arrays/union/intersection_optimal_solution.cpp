#include<bits/stdc++.h>

using namespace std;
vector<int> intersection(vector<int>&a,vector<int>&b){
    int n1 = a.size();
    int n2 = b.size();
    int i=0;
    int j=0;
    vector<int>ans;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            i++;
        }
        else if(b[j]<a[i]){
                j++;
        }
        else{
            ans.push_back(a[i]);
            i++;
            j++;
        }
        
    }
    return ans;
}
int main(){
    int n,m;
    cin >>n>>m;
    vector<int>a(n);
    vector<int>b(m);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i,m;i++){
        cin >> b[i];
    }
    vector<int>result = intersection(a,b);
    for(int i:result){
        cout << i << " ";
    }

    return 0;
}