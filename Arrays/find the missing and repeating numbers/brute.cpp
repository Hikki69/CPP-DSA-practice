#include<bits/stdc++.h>

using namespace std;
vector<int> findMissingAndRepeatingNum(vector<int>&a,int n){
    int repeating=-1, missing=-1;
    vector<int>ans;
    for(int i=0;i<n;i++){
        int cnt = 0;
        for(int j=0;j<n;j++){
            if(a[j]==i+1) cnt++;
        }
        if(cnt==2) repeating = i+1;
        else if(cnt == 0) missing = i+1;
        if(repeating!=-1&&missing!=-1) break;
    }
    ans.push_back(repeating);
    ans.push_back(missing);
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
// TC = O(n^2)

// space complexity
// SC = O(1)