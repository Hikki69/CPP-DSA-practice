#include<bits/stdc++.h>

using namespace std;
vector<int> majorityElementNby3Times(vector<int>&a,int n){
    int cnt1=0,cnt2=0,el1 =INT_MIN,el2=INT_MIN;
    for(int i=0;i<n;i++){
        if(cnt1==0 && a[i]!=el2){
            cnt1=1;
            el1= a[i];
        }
        else if(cnt2==0 && a[i]!=el1){
            cnt2=1;
            el2= a[i];
        }
        else if(el1==a[i]) cnt1++;
        else if(el2==a[i]) cnt2++;
        else cnt2--,cnt1--;
    }
    vector<int>ans;
    cnt1 =0,cnt2=0;
    for(int i=0;i<n;i++){
        if(el1==a[i]) cnt1++;
        if(el2==a[i]) cnt2++;
    }
    int mini = (int)(n/3)+1;
    if(cnt1>=mini) ans.push_back(el1);
    if(cnt2>=mini) ans.push_back(el2);
    sort(ans.begin(),ans.end());
    return ans;
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    vector<int>result=majorityElementNby3Times(a,n);
    for(int x:result){
        cout << x << " ";
    }
    return 0;
}

// time complexity
// TC = O(n)+O(n)

// space complexity
// SC = O(1)