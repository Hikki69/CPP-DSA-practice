#include<bits/stdc++.h>
// Type of koshans that can be asked
// 1. Given row and column tell the element at that place
// 2. Print any nth row of pascal triangle
// 3. Given N , print the entire pascal triangle

// koshan 1

long long funNCR(int n, int r){
    if(r<0 || r>n){
        return 0;
    }
    if(r==0 || r==n){
        return 1;
    }
    long long res= 1;
    for(int i=0;i<r;i++){
        res = res*(n-i);
        res = res/(i+1);
    }
    return res;
}
using namespace std;
int main(){
    int n,r;
    cin >> n >> r;
    cout << "Element at that place: " << funNCR(n-1,r-1);
    
    return 0;
}

// time complexity
// TC = O(r);
// space complexity
// SC = O(1);