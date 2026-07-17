#include<bits/stdc++.h>

using namespace std;
vector<int> findMissingAndRepeatingNum(vector<int>&a,long long n){
    vector<int>ans;
     // x->repeating 
     // y->missing
     // 1. (a[i])^(1^2^3^...n) = num
     // 2. find a differentiating bit in num, first one from the right
     // 3. put them into parts (0 and 1) and take XOR
     int xr = 0;
     for(int i=0;i<n;i++){
        xr = xr^a[i];
        xr = xr^(i+1);
     }
     int bitNo = 0;
     while(1){
        if((xr & (1<<bitNo))!=0){
            break;
        }
        bitNo++;
     }
     int zero = 0;
     int one = 0;
     for(int i=0;i<n;i++){
        // part of one club
        if((a[i]&(1<<bitNo))!=0){
            one = one ^ a[i];
        }
        // part of zero club
        else{
            zero = zero ^ a[i];
        }
     }
     for(int i=1;i<=n;i++){
         // part of one club
        if((i&(1<<bitNo))!=0){
            one = one ^ i;
        }
        // part of zero club
        else{
            zero = zero ^ i;
        }
     }
     int cnt = 0;
     for(int i=0;i<n;i++){
        if(a[i]==zero) cnt++;
    }
    if(cnt == 2) return {zero,one};
    return {one,zero};
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    vector<int>result = findMissingAndRepeatingNum(a,n);
    for(int x:result){
        cout << x << " ";
    }
    return 0;
}

// time complexity
// TC = O(4n)

// space complexity
// SC = O(1)