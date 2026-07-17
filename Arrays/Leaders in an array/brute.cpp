#include<bits/stdc++.h>

using namespace std;
vector<int> leadersInArr(vector<int>&a,int n){
    vector<int>L;
    for(int i=0;i<n;i++){
        int leader = true;
        for(int j=i+1;j<n;j++){
            if(a[j]>a[i]){
                leader = false;
                break;
            }
        }
        if(leader  == true){
            L.push_back(a[i]);
        }
    }
    sort(L.begin(),L.end());
    return L;
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    vector<int>Leaders = leadersInArr(a,n);
    for(int x:Leaders){
        cout << x << " ";
    }
    return 0;
}

// time complexity
// TC = O(n^2) (approximately)

// space complexity
// SC = O(n) --> worst case