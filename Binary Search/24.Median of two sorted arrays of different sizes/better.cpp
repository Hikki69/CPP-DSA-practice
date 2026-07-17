#include<bits/stdc++.h>

using namespace std;
double median(vector<int>&a,vector<int>&b,int n, int m){
    int i = 0, j = 0;
    int p = n+m;
    int ind2 = p/2;
    int ind1 = ind2-1;
    int cnt = 0;
    int ind1el = -1, ind2el = -1;
    while(i<n && j < m){
        if(a[i]<b[j]){
            if(cnt == ind1) ind1el = a[i];
            if(cnt == ind2) ind2el = a[i];
            cnt++;
            i++;
        }
        else{
            if(cnt == ind1) ind1el = b[j];
            if(cnt == ind2) ind2el = b[j];
            cnt++;
            j++;
        }
    }

    while(i < n){
        if(cnt == ind1) ind1el = a[i];
        if(cnt == ind2) ind2el = a[i];
        cnt++;
        i++;
    }

    while(j<m){
        if(cnt == ind1) ind1el = b[j];
        if(cnt == ind2) ind2el = b[j];
        cnt++;
        j++;
    }

    if(p%2 == 0){
        return ind2el;
    }

    else (double)((double)(ind1el+ind2el)) / 2.0;

}
int main(){
    int n,m ;
    cin >> n >> m;
    vector<int>a(n);
    for(int i = 0;i<n ;i++){
        cin >> a[i];
    }
    vector<int>b(m);
    for(int i = 0;i<m;i++){
        cin >> b[i];
    }

    cout << median(a,b,n,m);

    return 0;
}

// time complexity 
// TC = O(n+m)

// space complexity 
// SC = O(1)