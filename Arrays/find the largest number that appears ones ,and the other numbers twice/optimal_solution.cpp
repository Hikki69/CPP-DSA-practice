#include<bits/stdc++.h>

using namespace std;
int maxAppearsOnce(vector<int>&a,int n){
    int xor1 =0;
    for(int i=0;i<n;i++){
        xor1 = xor1^a[i];
    }
    return xor1;
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << maxAppearsOnce(a,n);
    return 0;
}

// time complexity 
//TC = O(n)

// space complexity
// SC = O(1)