#include<bits/stdc++.h>

using namespace std;
int main(){
    
    // n1,n2
    // gcd(n1,n2) = gcd(n1-n2, n2)   where n1>n2
    // gcd(a,b) = gcd(a-b, b) where a>b
    int a,b;
    cin >> a >> b;
    while(a>0 && b>0){
        if(a>b){
            a = a%b;
        }
        else{
            b = b%a;
        }
    }
    if(a==0){
            cout << b;
        }
        else cout << a;


    return 0;
}


// time coplexity tc = O(logphimin(a,b))