#include<bits/stdc++.h>

using namespace std;
int last(vector<int>&a,int n,int target){
    int low = 0,high = n-1;
    int last = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(a[mid]== target){
            last = mid;
            low = mid+1;
        }
        else if (a[mid]>target){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return last;
}
int first(vector<int>&a,int n,int target){
    int first = -1;
    int low = 0,high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(a[mid]==target){
            first = mid;
            high = mid-1;
        }
        else if(a[mid]>target){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return first;
}
vector<int> firstLastOccurance(vector<int>&a,int n,int target){
    int f= first(a,n,target);
    if(f == -1) return {-1,-1};
    int l = last(a,n,target);
    return {f,l};
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int target;
    cin >> target;
    vector<int>result = firstLastOccurance(a,n,target);
    for(int x:result){
        cout << x << " ";
    } 
    return 0;
}