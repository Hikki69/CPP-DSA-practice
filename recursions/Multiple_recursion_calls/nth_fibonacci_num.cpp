#include<bits/stdc++.h>

using namespace std;
int fib(int n){
    if(n<=1){
        return n;
    }
    return  (fib(n-1)+fib(n-2));   // fib(n-1) will go first after that fib(n-2)
}
int main(){
    int n;
    cin >> n;
    cout << fib(n);
    return 0;
}

// time complexity tc = 2^n (exponential)