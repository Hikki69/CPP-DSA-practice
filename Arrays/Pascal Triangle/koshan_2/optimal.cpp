#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int ans =1;
    cout << ans << " ";
    for(int c=1;c<n;c++){
        ans = ans*(n-c);
        ans = ans/c;
        cout << ans << " ";
    }
    return 0;
}

// time complexity 
// TC =  O(n)

// space complexity 
// SC = O(1)