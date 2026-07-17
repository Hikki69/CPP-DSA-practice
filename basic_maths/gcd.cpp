#include<bits/stdc++.h>

using namespace std;
int main(){
    int n1, n2;
    int gcd;
    cin >> n1 >> n2;
    // for(int i=1;i<= min(n1,n2);i++){
    //     if(n1%i == 0 && n2%i==0){
    //         gcd = i;            
    //     }
    // }

    // for worst case in time complexity

    for(int i=min(n1,n2);i>=1;i--){
        if(n1%i==0 && n2%i==0){
            gcd = i;
            break;
        }
    }
    cout << gcd;
    return 0;
}