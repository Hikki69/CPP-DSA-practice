#include<bits/stdc++.h>

using namespace std;
vector<int> firstLastOccurance(vector<int>&a,int n,int target){
    vector<int>ans;
    int first = -1,last=-1;
    for(int i=0;i<n;i++){
        if(a[i]==target){
            if(first==-1) first = i;
            last = i;
        }
    }
    ans.push_back(first);
    ans.push_back(last);
    return ans;
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int target;
    cin >> target;
    vector<int>result=firstLastOccurance(a,n,target);
    for(int x:result){
        cout << x << " ";
    }
    return 0;
}

// time complexity
// Tc = O(n)

// space complexity
// SC = O(1)