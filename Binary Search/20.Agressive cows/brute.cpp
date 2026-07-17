#include<bits/stdc++.h>
// place cows at such distances that the min distance between any of the two cows 
// should be max;
// Find that minimum distance
using namespace std;
bool canWePlace(vector<int>&a,int n,int dist,int c){
    int cntcows=1,last = a[0];
    for(int i= 1;i<n;i++){
        if(a[i]-last >= dist){
            cntcows++;
            last = a[i];
        }
    }
    if(cntcows >= c){
        return true;
    }
    return false;
}
int minDistance(vector<int>&a,int n,int c){
    sort(a.begin(),a.end());
    int maxDist = *max_element(a.begin(),a.end())-*min_element(a.begin(),a.end());
    for(int i=1;i<maxDist;i++){
        if(canWePlace(a,n,i,c)==true){
            continue;
        }
        else return (i-1);
    }  
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int c;
    cin >> c;
    cout << minDistance(a,n,c);
    return 0;
}

// time complexity 
// TC = O(max-min)*O(n)

// space complexity
// SC = O(1)