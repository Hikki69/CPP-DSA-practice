#include<bits/stdc++.h>

using namespace std;
void merge(vector <int> &arr,int low, int mid,int high){
    vector <int> temp;
    int left = low;
    int right = mid+1;
    while(left <= mid && right <= high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }    
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high ){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i]  = temp[i-low];
    }
} 
int countPairs(vector<int>&a,int low,int mid,int high){
    int right = mid+1;
    int cnt = 0;
    for(int i=low;i<=mid;i++){
        while(right<=high && a[i]>2*a[right]) right++;
        cnt += (right-(mid+1));
    }
    return cnt;
}  
int ms(vector<int> &arr,int low, int high){
    int cnt = 0;
    if(low >= high) return cnt;
    int mid = (low+high)/2;
    cnt += ms(arr,low,mid);
    cnt += ms(arr,mid+1,high);
    cnt += countPairs(arr,low,mid,high);
    merge(arr,low,mid,high);
    return cnt;
}
int ReversePairs(vector<int>&a,int n){
    return ms(a,0,n-1);
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << ReversePairs(a,n);
    return 0;
}

// time complexity
// TC = O(2nlogn)

// space complexity
// SC = O(n) -> while distorting the given array