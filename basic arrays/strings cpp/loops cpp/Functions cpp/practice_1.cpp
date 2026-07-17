#include<bits/stdc++.h>

using namespace std;
// Take two numbers and print its sum;
int sum(int x, int y){
int z = x+y;
return z;
}
int main(){
    int a,b;
    cin >> a >> b;
    int res = sum(a,b);
    cout << res;
    return 0;
}


// void sum(int x, int y){
// int z = x+y;
// cout << z;
// }
// int main(){
//     int a,b;
//     cin >> a >> b;
//     sum(a,b);
//     return 0;
// }