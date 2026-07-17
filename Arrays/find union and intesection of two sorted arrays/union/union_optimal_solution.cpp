#include<bits/stdc++.h>

using namespace std;
vector<int> Union(vector<int>&a,vector<int>&b){
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;
    vector<int>U;
    while(i<n1 && j<n2){
        if(a[i] <= b[j]){
            if(U.size() == 0 || U.back() != a[i]){
                U.push_back(a[i]);
            }
            i++;
        }
        else{
            if(U.size() == 0 || U.back() != b[j]){
                U.push_back(b[j]);
            }
            j++;
        }
    }
    while(j<n2){
        if(U.size() == 0 || U.back() != b[j]){
                U.push_back(b[j]);
            }
            j++;
    }
    while(i<n1){
         if(U.size() == 0 || U.back() != a[i]){
                U.push_back(a[i]);
            }
            i++;
    }
    return U;

}
int main(){
    int n,m;
    cin >> n >> m;
    vector<int>a(n);
    vector<int>b(m);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<m;i++){
        cin >> b[i];
    }
    vector<int>result = Union(a,b);
    for(int i:result){
        cout << i << " ";
    }
    return 0;
}

// time complexity
// TC = O(n1+n2)

// space complexity 
// SC = O(n1+n2)