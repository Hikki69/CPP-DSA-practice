#include<bits/stdc++.h>
// Brute Solution
// 1. Generate all permutations
// 2. Linear search the given permutation
// 3. Next permutation is the answer
// Time complexity TC = O(n! X n)

using namespace std;
vector<int> nextPermutation(vector<int>&a,int n){
    // in C++ stl library has the next permutation function
    next_permutation(a.begin(),a.end());
    return a;
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    vector<int>ans = nextPermutation(a,n);
    for(int x:ans){
        cout << x << " ";
    }
    return 0;
}