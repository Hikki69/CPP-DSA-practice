#include<bits/stdc++.h>

using namespace std;
int numAppearsOnce(vector<int>&a,int n){
    int num =0;
    for(int i=0;i<n;i++){
        num = a[i];
        int cnt = 0;
        for(int j=0;j<n;j++){
            if(a[j] == num){
                cnt++;
            }
        }
        if(cnt == 1){
            return num;   
        }
        return -1;
    }
   
}
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << numAppearsOnce(a,n);
    return 0;
}

// time complexity
// TC = O(n^2)

// space complexity
// SC = O(1)