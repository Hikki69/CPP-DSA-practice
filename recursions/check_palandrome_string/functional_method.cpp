#include<bits/stdc++.h>

using namespace std;
bool f(char st[],int i, int n){
    if (i>=n/2) return true;
    if(st[i] != st[n-i-1]) return false;
    return f(st,i+1,n);
}
int main(){
     int n;
     cin >> n;
     char st[n+1];
    cin >> st;
    cout <<boolalpha<< f(st,0,n);
    return 0;
}