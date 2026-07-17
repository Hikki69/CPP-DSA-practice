#include<bits/stdc++.h>

using namespace std;
int majorElement(vector<int>&a,int n){
    int cnt =0;
    int el;
    for(int i=0;i<n;i++){
        if(cnt == 0){
            cnt =1;
            el = a[i];
        }
        else if(a[i]==el){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    int cnt1=0;
    for(int i=0;i<n;i++){
        if(a[i] == el) cnt1++;
    }
    if(cnt1>n/2){
        return el;
    }
    return -1;
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << majorElement(a,n);
    return 0;
}

// time complexity 
// TC = O(n)+O(n)

// space complexity 
// SC = O(1)