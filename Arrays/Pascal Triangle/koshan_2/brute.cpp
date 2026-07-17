#include<bits/stdc++.h>
// print nth row of pascal triangle

using namespace std;
long long nthRow(int n, int r){
    long long res =1;
    if(r<0||r>n) return 0;
    if(r==0 || r==n) return 1;
    for(int i=0;i<r;i++){
            res = res*(n-i);
            res = res/(i+1);
    }
    return res;
}
int main(){
    int n;
    cin >> n;
    for(int c=1;c<=n;c++){
        cout << nthRow(n-1,c-1) << " ";
    }
    return 0;
}

// time complexity
// TC = O(nxr);

// space complexity 
// SC = O(1);