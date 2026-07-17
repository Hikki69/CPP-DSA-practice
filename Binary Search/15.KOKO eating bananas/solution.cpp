#include<bits/stdc++.h>
// KOKO Eating Bananas: Return the min integer K such that
// Koko can eat all bananas within H hrs
// where K is banana eating per hr
using namespace std;
int totalhours(vector<int>p,int n,int hourly){
    int totalhr = 0;
    for(int i=0;i<n;i++){
        totalhr += ceil((double)p[i]/(double)hourly);
    }
    return totalhr;
}
int fn(vector<int>p,int n,int H){
    int low=1,high = *max_element(p.begin(),p.end());      
    while(low<=high){
        int mid = low+(high-low)/2;
        int time = totalhours(p,n,mid);
        if(time<=H){
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
    vector<int>piles(n);
    for(int i=0;i<n;i++){
        cin >> piles[i];
    }
    int H;
    cin >> H;
    cout << fn(piles,n,H);
    return 0;
}

// time complexity
// TC = O(n)*O(log2(max Element in array))