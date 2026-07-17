#include<bits/stdc++.h>

using namespace std;
vector<int> findMissingAndRepeatingNum(vector<int>&a,long long n){
    vector<int>ans;
    // x -> repeating
    // y -> missing
    long long Sn = (n*n+n)/2;
    long long S2n = (n*(n+1)*(2*n+1))/6;
    long long S = 0;
    long long S2 =0;
    for(int i=0;i<n;i++){
        S+=a[i];
        S2 = S2+(long long )a[i]*(long long)a[i];
    }
    // S-Sn = num1;
    // x-y = num1 --> eq(1)
    // now take the sum of squares of elements of both arrays
    // S2-S2n = num2;
    // x^2-y^2 = num2;
    // (x-y)(x+y)= num2;
    // num1(x+y)=num2; from eq(1)
    // x+y = num2/num1= num3; --> eq(2)
    
    // now add eq(1) and eq(2)
    // 2x = num1+num3;
    // x = (num1+num3)/2;
    // now value of x in eq(1) to find y;
    long long val1 = S-Sn;
    long long val2 = S2-S2n;
    val2 = val2/val1;
    long long x = (val1+val2)/2;
    long long y = x-val1;
    ans.push_back(x);
    ans.push_back(y);
    return ans;
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    vector<int>result = findMissingAndRepeatingNum(a,n);
    for(int x:result){
        cout << x << " ";
    }
    return 0;
}

// time complexity
// TC = O(n)

// space complexity
// SC = O(1)