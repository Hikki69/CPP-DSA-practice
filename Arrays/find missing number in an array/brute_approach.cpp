#include<bits/stdc++.h>

using namespace std;
int missingNum(vector<int>&a,int n){
    int num;
    for(int i=0;i<n-1;i++){
        int flag = 0;
        for(int j=0;j<n-1;j++){
            if(a[j] == i+1){
            flag = 1;
            break;
            }
        }
        if(flag == 0){
            num = i+1;
        }
        
    }
    return num;
    
}
int main(){
    int n;
    cin >>n;
    vector<int>a(n-1);
    for(int i=0;i<n-1;i++){
        cin >> a[i];
    }
   cout << missingNum(a,n);
    return 0;
}

// time complexity
// TC = O(n*n)

// space complexity
// SC = O(1)