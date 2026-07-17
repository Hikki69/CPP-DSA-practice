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
int fn(vector<int>&a,int n,int m,int k){
    int mini = *min_element(a.begin(),a.end());
    int maxi = *max_element(a.begin(),a.end());
    int low = mini;
    int high = maxi;
    if(n<m*k) return -1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(possibleDays(a,n,m,k,mid)==1){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return low;
}
int main(){
    int n;
    cin >> n;
    vector<int>BloomDay(n);
    for(int i=0;i<n;i++){
        cin >> BloomDay[i];
    }
    // a[ith] means the flower will bloom a[ith] day

    // m ->> no. of bouquets
    // k -->> adjacent flowers required to make one bouquet 
    int m,k;
    cin >> m >> k;
    cout << fn(BloomDay,n,m,k);
    return 0;
}

// time complexity
// TC = O(n*log2(maxi-mini+1));

// space complexity
//SC = O(1);