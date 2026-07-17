#include<bits/stdc++.h>

using namespace std;
int main(){
      int n;
    cin >> n;
    int dup = n;
    int sum = 0;
    while(n>0){
        int ld = n%10;
        sum = sum + (ld*ld*ld);
        n = n/10;
    }
    if (sum == dup){
        cout << "it is armstrong number";
    }
    else cout << "it is not a  armstrong number";
    return 0;
}