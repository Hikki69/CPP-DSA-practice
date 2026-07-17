#include<bits/stdc++.h>

using namespace std;
int possibleDays(vector<int>&a,int n,int m, int k,int days){
    int cnt = 0, numOfBouquets = 0;
    for(int i=0;i<n;i++){
        if(a[i]<=days){
            cnt++;
        }
        else{
            numOfBouquets += cnt/k;
            cnt = 0;

        }
    }
    numOfBouquets += cnt/k;
    if(numOfBouquets>=m) return 1;
    else return 0;
}
int main(){
    int n ;
    cin >> n;
    vector<int>a(n);
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }
    int m,k;
    cin >> m >> k;
    int mini = *min_element(a.begin(),a.end());
    int maxi = *max_element(a.begin(),a.end());
    if(n<m*k) cout << -1;
    for(int i = mini;i<maxi;i++){
        if(possibleDays(a,n,m,k,i)==1){
            cout << i;
        }
    }
    return 0;
}

// time complexity
// TC = O(maxi-mini+1)+O(n);
// space complexity
// SC = O(1);