#include<bits/stdc++.h>

using namespace std;
int fct(int n){
    if(n==0 || n==1){
        return 1;
    }
    else return n*fct(n-1);
}
int main(){
    int n;
    cin >> n;
    cout << fct(n);
    return 0;
}