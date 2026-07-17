#include<bits/stdc++.h>

using namespace std;
// print linearly form N to 1
void f(int i, int n){
    if(i<1){
        return;
    }
    cout << i << endl;
    f(i-1,n);
}
int main(){
    int n;
    cin >> n;
    f(n,n);
    return 0;
}