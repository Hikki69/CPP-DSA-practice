#include<bits/stdc++.h>

using namespace std;
int count(int n){
    int cnt = 0;
    while (n>0){
       cnt = cnt + 1;
       n = n/10; 
    }
    // int cnt = (int)(log10(n)+1); same result as above 
    return cnt;
}
int main(){
    int n;
    cin >> n;
    cout << count(n);

    return 0;
}

// TC = O(log10(n))