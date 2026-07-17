#include<bits/stdc++.h>

using namespace std;
int maxConsecutive(vector<int>&a){
    int cnt =0;
    int max1=0;
    for(int i=0;i<a.size();i++){
        if(a[i] == 1){
            cnt ++;
            max1 = max(max1,cnt);
        }
        else{
            cnt = 0;
        }
    }
    return max1;
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << maxConsecutive(a);
    return 0;
}

//time complexity 
// TC = O(n)

// space complexity
// SC = O(1)