#include<bits/stdc++.h>

using namespace std;
int Smallestdivisor(vector<int>&a,int n,int t){
    for(int i=1;i<*max_element(a.begin(),a.end());i++){
        int sum = 0;
        for(int j = 0;j<n;j++){
            sum += ceil((double)a[j]/i);
        }
        if(sum<=t){
           return i;
        }
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
    int threshold;
    cin >> threshold;
    cout << Smallestdivisor(a,n,threshold);
    return 0;
}

// time complexity
// TC = O(n x max_element)

// space complexity
// SC=O(1)