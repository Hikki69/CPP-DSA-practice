#include<bits/stdc++.h>

using namespace std;
int TimesArrRotated(vector<int>&a,int n){
    int low = 0,high = n-1;
    int ans = INT_MAX;
    int index = -1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(a[low]<a[high]){
            if(a[low]<ans){
                ans = a[low];
                index = low;
            }
            break;
        }
        if(a[low]<a[mid]){
            if(a[low]<ans){
                ans = a[low];
                index = low;
            }
            low = mid+1;
        }
        else if(a[mid]<a[high]){
            if(a[mid]<ans){
                ans = a[mid];
                index = mid;
            }
            high = mid-1;
        }
        else{
            if(a[low]<ans){
                ans = a[low];
                index = low;
            }
            low++;
            high--;
        }
    }
    return index;
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << TimesArrRotated(a,n);
    return 0;
}