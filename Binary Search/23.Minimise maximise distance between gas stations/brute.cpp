#include<bits/stdc++.h>

using namespace std;
long double minimiseMaxDistance(vector<int>&a,int n,int k){
    vector<int>howMany(n-1,0);
    for(int gasStations =1;gasStations<=k;gasStations++){
        long double maxSection = -1;
        int maxInd = -1;
        for(int i = 0;i<n-1;i++){
            long double diff = a[i+1]-a[i];
            long double sectionLen = diff/(long double)(howMany[i]+1);
            if(sectionLen > maxSection){
                maxSection = sectionLen ;
                maxInd = i;
            }
        }
        howMany[maxInd]++;
    }
    long double maxAns = -1;
    for(int i = 0;i<n-1;i++){
        long double diff = a[i+1]-a[i];
        long double sectionLen = diff/(long double)(howMany[i]+1);
        maxAns = max(maxAns,sectionLen);
    }
    return maxAns;

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