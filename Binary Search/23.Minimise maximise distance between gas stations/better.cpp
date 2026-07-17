#include<bits/stdc++.h>

using namespace std;
long double minimiseMaxDistance(vector<int>&a,int n,int k){
    vector<int>howMany(n-1,0);
    priority_queue<pair<long double,int>>pq;
    for(int i=0;i<n-1;i++){
        pq.push({a[i+1]-a[i],i});
    }
    for(int gasStations =1;gasStations<=k;gasStations++){
        auto tp = pq.top(); pq.pop();
        int secInd = tp.second;
        howMany[secInd]++;
        long double iniDiff = a[secInd+1]-a[secInd];
        long double newSecLen = iniDiff/(long double)(howMany[secInd]+1);
        pq.push({newSecLen,secInd});
    }
    
    return pq.top().first;

}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int k;
    cin >> k;
    cout << minimiseMaxDistance(a,n,k);
    return 0;

}

// time complexity
// TC = O(nlogn)+O(klogn)

// space complexity
// SC = O(n-1)   due to priority queue