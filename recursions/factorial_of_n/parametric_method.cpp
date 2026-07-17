#include<bits/stdc++.h>

using namespace std;
void fct(int i, int n){
    if (i<1){
        cout << n;
        return;
    }
    fct(i-1,n*i);
}
int main(){
    int n;
    cin >> n;
    fct(n,1);
    
    return 0;
}