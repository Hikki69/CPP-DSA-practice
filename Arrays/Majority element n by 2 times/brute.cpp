#include<bits/stdc++.h>

using namespace std;
int majorElement(vector<int>&a,int n){
    for(int i=0;i<n;i++){
        int cnt =0;
        for(int j=0;j<n;j++){
            if(a[j] == a[i]) cnt++;
        }
        if(cnt>n/2) return a[i];
    }
    return -1;
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << majorElement(a,n);
    return 0;
}

// time complexity
// TC = O(n^2)

// space complexixty
// SC = O(1)