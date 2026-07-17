#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin >> n;
    int ans;
    for(int i = 0;i<n;i++){
        if(i*i<=n){
            ans = i;
        }
        else break;
    }
    cout << ans;
    return 0;
}