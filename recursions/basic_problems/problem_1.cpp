#include<bits/stdc++.h>

using namespace std;
// print name N times
void f(int i, int n){
    if (i>n){
        return;
    }
    cout << "Harsh"<<endl;
    f(i+1,n);
}
int main(){
    int n;
    cin >> n;
    f(1,n);
    return 0;
}

// time complexity tc = O(n)
// stack complexity SC = O(n)