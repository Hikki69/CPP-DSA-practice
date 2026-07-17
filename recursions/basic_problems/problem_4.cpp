#include<bits/stdc++.h>

using namespace std;
// prit linearly from 1 to N (but by backtrack)
void f(int i, int n){
    if(i<1){
        return;
    }
    f(i-1,n);
    cout << i << endl;
}
int main(){
    int n;
    cin >> n;
    f(n,n);
    return 0;
}