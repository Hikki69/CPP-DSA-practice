#include<bits/stdc++.h>

using namespace std;
// int power(int mid,int n){
//     long long ans =1;
//     while(n>0){
//         if(n%2==1){
//             ans = ans*mid;
//             n=n-1;
//         }
//         else{
//             mid=mid*mid;
//             n = n/2;
//         }
//     }
//     return ans;
// }

int powerFunction(int mid,int n,int m){
    long long ans = 1;
    for(int i=1;i<=n;i++){
        ans = ans*mid;
        if(ans>m) return 2;
    }
    if(ans ==m) return 1;
    return 0;
}

int nthRootOfInt(int m,int n){
    int low = 1,high = m;
    while(low<=high){
        long long mid = low+(high-low)/2;
        int val = powerFunction(mid,n,m);
        if(val==1) return mid;
        else if(val==0){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;
}
int main(){
    int m,n;
    cin >> m >> n;
    cout << nthRootOfInt(m,n);
    return 0;
}

// time comolexity
// TC= O(log2M * log2N)